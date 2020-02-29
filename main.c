/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:38:46 by alidy             #+#    #+#             */
/*   Updated: 2020/02/29 14:56:23 by alidy            ###   ########lyon.fr   */
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
    printf("my:	Mot: %-10s len: %d\n", test, ft_strlen(test));
	printf("	Mot: %-10s len: %d\n", test, strlen(test));
    printf("my:	Mot: %-10s len: %d\n", test2, ft_strlen(test2));
	printf("	Mot: %-10s len: %d\n", test2, strlen(test2));
	/*	segfault
    printf("my: Mot: %-10s len: %d\n", 0, ft_strlen(0));
	printf("	  Mot: %-10s len: %d\n", 0, strlen(0));*/

	/*		TEST ft_write		*/

	printf("\n TEST FT_WRITE : \n\n");
	printf("	my:	res: %d\n",ft_write(1, test, 7));
	printf("		res: %d\n",write(1, test, 7));
	printf("my:	res: %d\n",ft_write(1, test2, 0));
	printf("	res: %d\n",write(1, test2, 0));
	printf("my:	res: %d\n",ft_write(1, test2, -1));
	printf("	res: %d\n",write(1, test2, -1));
	printf("my:	res: %d\n",ft_write(1, 0, 1));
	printf("	res: %d\n",write(1, 0, 1));

	/*		TEST ft_strcmp		*/

	printf("\n TEST FT_STRCMP : \n\n");
    printf("my:	src: %-10s dest: %-10s res: %d\n", test, test, ft_strcmp(test, test));
	printf("	src: %-10s dest: %-10s res: %d\n", test, test, strcmp(test, test));
    printf("my:	src: %-10s dest: %-10s res: %d\n", test2, test2, ft_strcmp(test2, test2));
	printf("	src: %-10s dest: %-10s res: %d\n", test2, test2, strcmp(test2, test2));
	printf("my:	src: %-10s dest: %-10s res: %d\n", test2, test, ft_strcmp(test2, test));
	printf("	src: %-10s dest: %-10s res: %d\n", test2, test, strcmp(test2, test));
	printf("my:	src: %-10s dest: %-10s res: %d\n", test, test2, ft_strcmp(test, test2));
	printf("	src: %-10s dest: %-10s res: %d\n", test, test2, strcmp(test, test2));
	/*	segfault
	printf("my:	src: %-10s dest: %-10s res: %d\n", test, 0, ft_strcmp(test, 0)); 
	printf("my:	src: %-10s dest: %-10s res: %d\n", test, 0, ft_strcmp(test, 0));*/

	/*		TEST ft_read		*/

	printf("\n TEST FT_READ : \n\n");
	printf("my:	return: %d res: %s\n", ft_read(fd, buffer, -1), buffer);
	printf("	return: %d res: %s\n", read(fd, buffer, -1), buffer);
	printf("my:	return: %d res: %s\n", ft_read(fd, 0, 1), buffer);
	printf("	return: %d res: %s\n", read(fd, 0, 1), buffer);
	printf("my:	return: %d res: %s\n", ft_read(fd, buffer, 25), buffer);

	/*		TEST ft_strdup		*/

	printf("\n TEST FT_STRDUP : \n\n");
	dup = ft_strdup("salut !");
	printf("%s\n",dup);
	
	/*		TEST ft_strcpy		*/
	
	printf("\n TEST FT_STRCPY : \n\n");
	printf("avant => dest: %-10s src: %s\n", dup, test);
	ft_strcpy(dup, test);
	printf("apres => dest: %-10s src: %s\n", dup, test);
	printf("avant => dest: %-10s src: mdr\n", dup);
	ft_strcpy(dup, "mdr");
	printf("apres => dest: %-10s src: mdr\n", dup);

	free(dup);
	close(fd);
}