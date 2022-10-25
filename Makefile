# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 17:35:57 by mcourtin          #+#    #+#              #
#    Updated: 2022/10/20 17:03:04 by mcourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs

SRCS_P1 = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c \
	ft_strdup.c \

 SRCS_P2 = ft_substr.c ft_strjoin.c \
	 ft_strtrim.c ft_split.c \
	 ft_itoa.c ft_strmapi.c \
	 ft_striteri.c ft_putchar_fd.c \
	 ft_putstr_fd.c ft_putendl_fd.c \
	 ft_putnbr_fd.c \

SRCS_B	= ft_lstnew_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c 
	

OBJS_P1 = $(SRCS_P1:.c=.o)
OBJS_P2 = $(SRCS_P2:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS_P1) $(OBJS_P2)
	$(LIB) $@ $^

bonus:		$(OBJS_P1) $(OBJS_P2) $(OBJS_B) 
			$(LIB) $(NAME) $(OBJS_B) $(OBJS_P1) $(OBJS_P2)

clean:
	rm -f $(OBJS_P1) $(OBJS_P2) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus