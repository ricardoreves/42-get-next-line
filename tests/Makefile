# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 13:17:11 by rpinto-r          #+#    #+#              #
#    Updated: 2022/03/27 17:06:41 by rpinto-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### VARIABLES ###
CC		 = gcc
RM		 = rm -rf
CFLAGS	 = -Wall -Werror -Wextra
CDEBUG	 = -g -fsanitize=address
NORM	 = norminette
SRCS	 = ../get_next_line.c ../get_next_line_utils.c
SRCS_INC = ../get_next_line.h
NAME	 = gnl

### BUFFER ###˙
ifdef BUFFER_SIZE
  BUFFER_SIZE = :
else
  BUFFER_SIZE = 42
endif

### TESTER ###
TEST_DIR = ../gnlTester
TEST_RUN = make m
TEST_GIT = git@github.com:Tripouille/gnlTester.git
TEST_CFG = git config pull.rebase false

### RULES ###
all: $(NAME)

$(NAME): clean
	$(CC) $(CFLAGS) test.c $(SRCS) -D BUFFER_SIZE=$(BUFFER_SIZE) -o $(NAME) && ./$(NAME) ascii-art.txt

dev: CFLAGS += $(CDEBUG)
dev:
	$(CC) $(CFLAGS) test.c $(SRCS) -D BUFFER_SIZE=$(BUFFER_SIZE) -o $(NAME) && ./$(NAME) test.txt

norm:
	$(NORM) $(SRCS) $(SRCS_INC)

test: $(TEST_DIR)
	cd $(TEST_DIR) && $(TEST_CFG) && $(TEST_RUN)

$(TEST_DIR):
	test ! -d $(TEST_DIR) && cd .. && git clone $(TEST_GIT)

clean:
	$(RM) $(TEST_DIR) $(NAME)