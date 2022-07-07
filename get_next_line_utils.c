/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:28:04 by mkhairul          #+#    #+#             */
/*   Updated: 2022/07/07 18:14:41 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const s1, char const s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(siezof(*s1) * (ft_strlen(s1) * ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	if (c >= 256)
		c -= 256;
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	lens;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	lens = (unsigned int)ft_strlen(s);
	if (start + len > lens)
		len = lens - start;
	if (start > lens)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
