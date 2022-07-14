/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:28:04 by mkhairul          #+#    #+#             */
/*   Updated: 2022/07/14 14:57:48 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const void *str)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(const void *s1, const void *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str)
		return (NULL);
	while (str1[i])
		str[j++] = str1[i++];
	i = 0;
	while (str2[i])
		str[j++] = str2[i++];
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

char	*ft_substr(const char *s, unsigned int start, size_t len)
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
