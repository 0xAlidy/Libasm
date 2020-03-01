/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:38:46 by alidy             #+#    #+#             */
/*   Updated: 2020/03/01 10:06:43 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
    char test[] = "Bonjour";
    char test2[] = "";
	char buffer[26];
	char *dup;
	int	 fd;

	fd = open("libasm.h", 'r');

    /*      TEST ft_strlen      */
	
    printf("\n TEST FT_STRLEN : \n\n");
	printf("true:	Mot: %-10s len: %d\n", test, strlen(test));
    printf("my:	Mot: %-10s len: %d\n\n", test, ft_strlen(test));
	printf("true:	Mot: %-10s len: %d\n", test2, strlen(test2));
    printf("my:	Mot: %-10s len: %d\n\n", test2, ft_strlen(test2));
	/*	segfault
    printf("my: Mot: %-10s len: %d\n", 0, ft_strlen(0));
	printf("	  Mot: %-10s len: %d\n", 0, strlen(0));*/

	/*		TEST ft_write		*/

	printf("\n TEST FT_WRITE : \n\n");
	printf("	true:	res: %d\n", write(1, test, 7));
	printf("	my:	res: %d\n\n", ft_write(1, test, 7));
	printf("true:	res: %d\n", write(1, test2, 0));
	printf("my:	res: %d\n\n", ft_write(1, test2, 0));
	printf("true:	res: %d\n", write(755, test2, 20));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_write(755, test2, 20));
	printf("	errno = %s\n\n", strerror(errno));
	printf("true:	res: %d\n", write(1, test2, -10));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_write(1, 0, 1));
	printf("	errno = %s\n\n", strerror(errno));
	printf("true:	res: %d\n", write(1, 0, 1));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_write(1, 0, 1));
	printf("	errno = %s\n\n", strerror(errno));
	
	/*		TEST ft_strcmp		*/

	printf("\n TEST FT_STRCMP : \n\n");
   
	printf("true:	src: %-10s dest: %-10s res: %d\n", test, test, strcmp(test, test));
	printf("my:	src: %-10s dest: %-10s res: %d\n\n", test, test, ft_strcmp(test, test));
	printf("true:	src: %-10s dest: %-10s res: %d\n", test2, test2, strcmp(test2, test2));
    printf("my:	src: %-10s dest: %-10s res: %d\n\n", test2, test2, ft_strcmp(test2, test2));
	printf("true:	src: %-10s dest: %-10s res: %d\n", test2, test, strcmp(test2, test));
	printf("my:	src: %-10s dest: %-10s res: %d\n\n", test2, test, ft_strcmp(test2, test));
	printf("true:	src: %-10s dest: %-10s res: %d\n", test, test2, strcmp(test, test2));
	printf("my:	src: %-10s dest: %-10s res: %d\n\n", test, test2, ft_strcmp(test, test2));
	/*	segfault
	printf("my:	src: %-10s dest: %-10s res: %d\n", test, 0, ft_strcmp(test, 0)); 
	printf("my:	src: %-10s dest: %-10s res: %d\n", test, 0, ft_strcmp(test, 0));*/

	/*		TEST ft_read		*/

	printf("\n TEST FT_READ : \n\n");
	printf("true:	res: %d\n", read(755, buffer, 20));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_read(755, buffer, 20));
	printf("	errno = %s\n\n", strerror(errno));
	printf("true:	res: %d\n", read(fd, 0, 10));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_read(fd, 0, 10));
	printf("	errno = %s\n\n", strerror(errno));
	printf("true:	res: %d\n", read(1, buffer, -10));
	printf("	errno = %s\n", strerror(errno));
	printf("my:	res: %d\n", ft_read(1, buffer, -10));
	printf("	errno = %s\n\n", strerror(errno));
	printf("my:	return: %d res: %s\n", ft_read(fd, buffer, 25), buffer);

	/*		TEST ft_strdup		*/

	printf("\n TEST FT_STRDUP : \n\n");
	dup = ft_strdup("");
	printf("%s\n",dup);
	free(dup);
	dup = ft_strdup("salut !");
	printf("%s\n",dup);
	
	/*		TEST ft_strcpy		*/
	
	printf("\n TEST FT_STRCPY : \n\n");
	printf("avant => dest: %-10s src: %s\n", dup, test);
	ft_strcpy(dup, test);
	printf("apres => dest: %-10s src: %s\n\n", dup, test);
	printf("avant => dest: %-10s src: \n", dup);
	ft_strcpy(dup, "");
	printf("apres => dest: %-10s src: \n", dup);

	free(dup);
	close(fd);
}