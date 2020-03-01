/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 03:10:43 by alidy             #+#    #+#             */
/*   Updated: 2020/02/29 18:09:07 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_write(int fd, const void *buf, int size);
int		ft_read(int fd, void *buf, int size);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);

#endif
