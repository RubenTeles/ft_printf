# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rteles <rteles@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 21:17:09 by rteles            #+#    #+#              #
#    Updated: 2022/01/08 22:27:24 by rteles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= 	ft_bzero.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_memset.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_strlcat.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c 

OBJS	= $(SRCS:.c=.o) 

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

RM		= rm -f

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

AR		= ar -rcs

all:	$(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus