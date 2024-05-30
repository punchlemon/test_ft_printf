# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 20:23:46 by retanaka          #+#    #+#              #
#    Updated: 2024/05/30 11:42:06 by retanaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	test
INCLUDE			=	include
FTPRINTF		=	..
FTPRINTF_A		=	libftprintf.a
SRC_DIR			=	src/
OBJ_DIR			=	obj/
CC				=	cc
CFLAGS			=	-Wall -Werror -Wextra
IFLAGS			=	-I $(INCLUDE) -I $(FTPRINTF)/$(INCLUDE)
RM				=	rm -f
AR				=	ar rcs

# Colors
DEF_COLOR		=	\033[0;39m
GRAY			=	\033[0;90m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
BLUE			=	\033[0;94m
MAGENTA			=	\033[0;95m
CYAN			=	\033[0;96m
WHITE			=	\033[0;97m

SRC_FILES		=	test_ft_printf_c \
					test_ft_printf_s \
					test_ft_printf_p \
					test_ft_printf_d \
					test_ft_printf_i \
					test_ft_printf_u \
					test_ft_printf_x \
					test_ft_printf_x_upper \
					test_ft_printf_percentage \
					test_ft_printf_mix \
					main \

SRC				=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ				=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJ_DIR_FLAG	=	.obj_dir_exists

all:				$(NAME)

$(NAME):			$(OBJ)
					@make -C $(FTPRINTF)
					@$(CC) $(CFLAGS) $(IFLAGS) $(OBJ) $(FTPRINTF)/$(FTPRINTF_A) -o $(NAME)
					@echo "$(GREEN)test compiled!$(DEF_COLOR)"

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c | $(OBJ_DIR_FLAG)
					@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
					@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR_FLAG):
					@mkdir -p $(OBJ_DIR)

ft_printf_clean:
					@make clean -C $(FTPRINTF)

test_clean:
					@$(RM) -r $(OBJ_DIR)
					@echo "$(BLUE)test object files cleaned!$(DEF_COLOR)"

clean:				ft_printf_clean test_clean

fclean:				test_clean
					@make fclean -C $(FTPRINTF)
					@$(RM) $(NAME)
					@echo "$(CYAN)test executable files cleaned!$(DEF_COLOR)"

re:					fclean all
					@echo "$(GREEN)Cleaned and rebuilt everything for test!$(DEF_COLOR)"

norm:
					@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY:				all clean fclean re norm
