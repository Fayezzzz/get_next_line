/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:28:27 by mkhairul          #+#    #+#             */
/*   Updated: 2022/07/13 13:29:45 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*gnl_cutjoin(int fd, char *storage);
char	*ft_strjoin(const void *s1, const void *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);

int		ft_count(char *str);
int		ft_strlen(const void *str);

#endif
