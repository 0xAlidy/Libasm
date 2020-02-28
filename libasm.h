/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 03:10:43 by alidy             #+#    #+#             */
/*   Updated: 2020/02/28 11:43:14 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

size_t		ft_strlen(const char *str);
char *		ft_strcpy(char * dst, const char * src);
size_t      ft_write(int fd, const void *buf, size_t size);
size_t      ft_read(int fd, void *buf, size_t size);
int         ft_strcmp(const char *s1, const char *s2);
char *      ft_strdup(const char *s1);


#endif