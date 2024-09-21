# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 14:22:17 by yustinov          #+#    #+#              #
#    Updated: 2024/09/20 16:36:07 by yustinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

REGULAR_SRCS = $(filter-out %_bonus.c, $(wildcard ft_*.c))
BONUS_SRCS = $(wildcard *_bonus.c)

REGULAR_OBJS = $(REGULAR_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a

all: $(NAME) bonus

$(NAME): $(REGULAR_OBJS)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
	$(AR) rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(REGULAR_OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: fclean all clean
	$(CC) ft_test_all.c libft.a
	./a.out

.PHONY: all clean fclean re bonus
