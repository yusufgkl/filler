NAME = libftprintf.a

CC = gcc

SRC = ./ft_printf.c\
	  ./flags.c\
	  ./utils.c\
	  ./utils2.c\
	  ./utils3.c\
	  ./parsing.c\
	  ./parse2.c\
	  ./conv_di.c\
	  ./conv_ouxx.c\
	  ./conv_p.c\
	  ./conv_upc.c\
	  ./print.c\
	  ./print2.c\
	  ./print3.c\
	  ./ft_atoi.c\
	  ./ft_isalpha.c\
	  ./ft_strcat.c\
	  ./ft_strchr.c\
	  ./ft_itoa.c\
	  ./ft_strjoin.c\
	  ./ft_isdigit.c\
	  ./ft_strlen.c\
	  ./ft_putstr.c\
	  ./ft_strcmp.c\
	  ./ft_strcpy.c\
	  ./ft_strncpy.c\
	  ./ft_toupper.c\
	  ./ft_numlen.c\
	  ./ft_charblank.c\
	  ./ft_putchar.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

INC = ./libftprintf.h\
	  ./libft.h\

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

$(NAME): $(OBJ)
	@echo "$(GRE)===== Compilation en cours =====$(DEF)";
	@$(CC) $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(GRE)===== Compilation terminee =====$(DEF)";

clean:
	@echo "$(GRE)===== Nettoyage en cours   =====$(DEF)";
	@rm -rf $(OBJ)
	@echo "$(GRE)===== Nettoyage termine    =====$(DEF)";

fclean:
	@echo "$(GRE)===== Nettoyage en cours   =====$(DEF)";
	@rm -rf $(NAME)
	@rm -rf $(OBJ)
	@echo "$(GRE)===== Nettoyage termine    =====$(DEF)";

re:
	@echo "$(GRE)=====          re          =====$(DEF)";
	@make fclean all
