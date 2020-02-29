# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/28 11:42:58 by alidy             #+#    #+#              #
#    Updated: 2020/02/29 15:04:40 by alidy            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libasm.a

CC		=	nasm

FLAG 	= 	-f

SRCS	= 	srcs/ft_read.s		\
			srcs/ft_strcmp.s	\
			srcs/ft_strcpy.s 	\
			srcs/ft_strdup.s 	\
			srcs/ft_strlen.s 	\
			srcs/ft_write.s 	\
			
OBJS	= 	$(SRCS:.s=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.s $(HEADERS)
		$(CC) $(FLAG) macho64 -s $<

test : $(NAME)
	   gcc -w $(NAME) main.c && ./a.out

clean	:
		/bin/rm -f $(OBJS)
			
fclean	:	clean	
		/bin/rm -f $(NAME)
		/bin/rm -f a.out

re		: 	fclean all
