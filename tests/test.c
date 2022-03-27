/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:07:59 by rpinto-r          #+#    #+#             */
/*   Updated: 2022/03/27 17:20:26 by rpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*line;

	if (argc != 2)
		printf("Error: a file path is required\n");
	else
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while (++i)
		{
			line = get_next_line(fd);
			if (!line)
				break ;
			printf("[line:%.2d]%s", i, line);
			free(line);
		}
		close(fd);
	}
	return (0);
}
