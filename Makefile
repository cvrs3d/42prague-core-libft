# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 14:22:17 by yustinov          #+#    #+#              #
#    Updated: 2024/09/23 14:04:24 by yustinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		= ft_isalpha.c\
		ft_toupper.c\
		ft_isdigit.c\
		ft_tolower.c\
		ft_isalnum.c\
		ft_strchr.c\
		ft_isascii.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_strncmp.c\
		ft_strlen.c\
		ft_memchr.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strnstr.c\
		ft_strlcpy.c\
		ft_atoi.c\
		ft_strlcat.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c
BSRC	= ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c
OBJ		= $(SRC:.c=.o)
BOBJ	= $(BSRC:.c=.o)
INCS	= libft.h
LIBC	= ar rcs
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

bonus: $(OBJ) $(BOBJ)
	$(LIBC) $(NAME) $(OBJ) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

function: 
	$(CC) $(CFLAGS) $(funcname) $(NAME)

.PHONY: all clean fclean re bonus
