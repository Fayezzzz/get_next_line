/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:28:00 by mkhairul          #+#    #+#             */
/*   Updated: 2022/07/14 14:57:23 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

char	*gnl_cutjoin(int fd, char *storage)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*buff;
	int		reader;

	if (storage == NULL)
	{
		storage = malloc(sizeof(char) * 1);
		storage[0] = '\0';
	}
	reader = read(fd, buffer, BUFFER_SIZE);
	while (reader > 0)
	{
		buffer[reader] = '\0';
		buff = ft_strjoin(storage, buffer);
		free(storage);
		storage = buff;
		if (ft_strchr(storage, '\n'))
			break ;
		reader = read(fd, buffer, BUFFER_SIZE);
	}
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*buff;
	char		*lines;
	int			reader;

	lines = NULL;
	buff = gnl_cutjoin(fd, storage);
	if (buff[0] == '\0')
		free(storage);
	storage = buff;
	reader = ft_count(storage);
	if (storage[0] != '\0')
	{
		lines = ft_substr(storage, 0, (reader + 1));
		buff = ft_substr(storage, (reader + 1), ft_strlen(storage));
		free(storage);
		storage = buff;
	}
	if (storage[0] == '\0')
	{
		free(storage);
		storage = NULL;
	}
	return (lines);
}
