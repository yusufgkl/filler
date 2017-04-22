# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygokol <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/21 19:40:51 by ygokol            #+#    #+#              #
#*   Updated: 2017/04/22 13:36:59 by ygokol           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = ygokol.filler

SRC =		main.c			\
			map.c		\
			pos.c		\
			take_token.c	\
			push.c	\
			check_token.c	\
			ft_double_strnew.c \
			algo.c			\

OBJ = $(SRC:.c=.o)

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

all: $(NAME)

$(NAME):
	@echo "$(YEL)===== creation de la libft        =====$(DEF)";
	@make -C libft
	@echo "$(GRE)===== libft                   [OK]=====$(DEF)";
	@echo "$(YEL)===== Creation de ygokol.filler   =====$(DEF)";
	@$(CC) -c $(SRC)
	@$(CC) -o $(NAME) $(OBJ) libft/libft.a
	@echo "$(GRE)===== ygokol.filler cree      [OK]=====$(DEF)";

clean:
	@echo "$(YEL)===== Nettoyage en cours   [CLEAN]=====$(DEF)";
	@make clean -C libft
	@echo "$(GRE)===== libft clean             [OK]=====$(DEF)";
	@rm -rf $(OBJ) winner.o
	@echo "$(GRE)===== Nettoyage termine       [OK]=====$(DEF)";

fclean:
	@echo "$(YEL)===== Nettoyage en cours  [FCLEAN]=====$(DEF)";
	@make clean -C libft
	@echo "$(GRE)===== libft clean             [OK]=====$(DEF)";
	@rm -rf $(NAME)
	@rm -rf $(OBJ) winner.o
	@rm -rf libft/libft.a
	@echo "$(GRE)===== Nettoyage termine       [OK]=====$(DEF)";

re:
	@echo "$(GRE)=====          re                 =====$(DEF)";
	@make fclean all

winner:
	@echo "$(YEL)===== Creation de winner          =====$(DEF)";
	@gcc -c winner.c
	@gcc -o winner winner.o libft/libft.a
	@echo "$(GRE)===== winner cree                 =====$(DEF)";

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY : all clean fclean re
