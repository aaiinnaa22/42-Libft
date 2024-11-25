# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalbrech <aalbrech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 09:11:43 by aalbrech          #+#    #+#              #
#    Updated: 2024/05/11 13:18:02 by aalbrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isascii.c	ft_memcpy.c	ft_putstr_fd.c	ft_strlcat.c	ft_strrchr.c \
ft_atoi.c	ft_isdigit.c	ft_memmove.c	ft_split.c	ft_strlcpy.c	ft_strtrim.c \
ft_bzero.c	ft_isprint.c	ft_memset.c	ft_strchr.c	ft_strlen.c	ft_substr.c \
ft_calloc.c	ft_itoa.c	ft_putchar_fd.c	ft_strdup.c	ft_strmapi.c	ft_tolower.c \
ft_isalnum.c	ft_memchr.c	ft_putendl_fd.c	ft_striteri.c	ft_strncmp.c	ft_toupper.c \
ft_isalpha.c	ft_memcmp.c	ft_putnbr_fd.c	ft_strjoin.c	ft_strnstr.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

NAME = libft.a

BONUS_SRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

.PHONY = all clean fclean re bonus

all: $(NAME)

bonus: .bonus

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)
	rm -f .bonus


fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)
	touch .bonus
