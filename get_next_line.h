/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:28:27 by mkhairul          #+#    #+#             */
/*   Updated: 2022/07/01 20:30:33 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXTLINE_H
# define GET_NEXTLINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);