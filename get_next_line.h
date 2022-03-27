/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:03:28 by rpinto-r          #+#    #+#             */
/*   Updated: 2022/03/27 16:32:34 by rpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_return_next_line(char **buffer);
int		ft_has_next_line(char *s);
int		ft_length_next_line(char *s);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_free(char *str);
char	*ft_concat_buffer(char *buffer, char *buffer_read);
void	ft_update_buffer(char **buffer, int start);

#endif