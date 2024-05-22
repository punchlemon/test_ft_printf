# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 20:23:46 by retanaka          #+#    #+#              #
#    Updated: 2024/05/22 17:58:53 by retanaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	test
INCLUDE				=	include
FTPRINTF			=	..
FTPRINTF_A			=	libftprintf.a
SRC_DIR				=	src/
OBJ_DIR				=	obj/
CC					=	cc
CFLAGS				=	-Wall -Werror -Wextra
IFLAGS				=	-I$(INCLUDE) -I$(FTPRINTF)/$(INCLUDE)
RM					=	rm -f
AR					=	ar rcs

# Colors

DEF_COLOR			=	\033[0;39m
GRAY				=	\033[0;90m
RED					=	\033[0;91m
GREEN				=	\033[0;92m
YELLOW				=	\033[0;93m
BLUE				=	\033[0;94m
MAGENTA				=	\033[0;95m
CYAN				=	\033[0;96m
WHITE				=	\033[0;97m

SRC_FILES			=	test_ft_printf_c \
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

SRC					=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ					=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF				=	.cache_exists

all:				$(NAME)

$(NAME):			$(OBJ)
					@make -C $(FTPRINTF)
					@$(CC) $(CFLAGS) $(IFLAGS) $(OBJ) $(FTPRINTF)/$(FTPRINTF_A) -o $(NAME)
					@echo "$(GREEN)test compiled!$(DEF_COLOR)"
					@./$(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
					@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
					@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJF):
					@mkdir -p $(OBJ_DIR)

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C $(FTPRINTF)
					@echo "$(BLUE)test object files cleaned!$(DEF_COLOR)"

fclean:				clean
					@$(RM) $(NAME)
					@make fclean -C $(FTPRINTF)
					@echo "$(CYAN)test executable files cleaned!$(DEF_COLOR)"

re:					fclean all
					@echo "$(GREEN)Cleaned and rebuilt everything for test!$(DEF_COLOR)"

norm:
					@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY:				all clean fclean re norm
