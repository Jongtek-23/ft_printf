# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: focampo <focampo@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 19:09:47 by focampo           #+#    #+#              #
#    Updated: 2020/10/31 22:09:14 by focampo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

HEADER = -I. -I./$(LIBFT_DIR)

SRCS = ft_printf.c parameters.c ft_caractere.c ft_string.c ft_print_d_i.c \
	   ft_print_u.c ft_pointer.c ft_klein_x.c ft_grote_x.c ft_percent.c

OBJS = $(SRCS:.c=.o)

CC	= gcc

CFLAGS = -Wall -Werror -Wextra

RM 	= rm -rf

all: $(NAME)

$(NAME):	$(OBJS)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean:	clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re:	fclean all

.PHONY: all clean fclean re
