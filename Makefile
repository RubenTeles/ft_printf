# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rteles <rteles@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 21:17:09 by rteles            #+#    #+#              #
#    Updated: 2022/01/08 22:50:00 by rteles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

LIBFT	= 	libft

LIB		= ft_printf.h -L./libft -lft


SRCS	= 	$(wildcard ft_printf/*.c)

OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS) 
	@ranlib $(NAME)

.o.c:
	@$(CC) $(CFLAGS) -I $(LIB) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean:	clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re:		fclean all

norm:
	@norminette $(SRCS) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY:	all clean fclean re norm