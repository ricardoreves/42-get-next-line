/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:00:55 by rpinto-r          #+#    #+#             */
/*   Updated: 2021/11/09 13:11:49 by rpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	while (len--)
		str[len] = s[len];
	return (str);
}

char	*ft_concat_buffer(char *buffer, char *buffer_read)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_strlen(buffer) + ft_strlen(buffer_read);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	j = 0;
	while (buffer_read[j])
		str[i++] = buffer_read[j++];
	str[i] = 0;
	ft_free(buffer);
	return (str);
}

void	ft_update_buffer(char **buffer, int start)
{
	int		i;
	int		len;
	char	*tmp;

	tmp = *buffer;
	len = ft_strlen(tmp) - start;
	tmp = malloc(sizeof(char) * len + 1);
	if (!tmp)
		ft_free(tmp);
	else
	{
		i = 0;
		while (i < len)
			tmp[i++] = (*buffer)[start++];
		tmp[i] = 0;
	}
	ft_free(*buffer);
	*buffer = tmp;
}

char	*ft_free(char *str)
{
	if (str)
	{
		free(str);
		str = 0;
	}
	return (str);
}
