# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 12:48:38 by phkevin           #+#    #+#              #
#    Updated: 2024/05/31 01:50:48 by phkevin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#	Makefile variables
################################################################################

NAMECC	=	ft_printf
CC		=	clang
FLAGWS	=	-Wall -Wextra -Werror
AR		=	ar rcs
RM		=	/bin/rm -f

################################################################################
#	Mandatory part
################################################################################

NAME		=	libftprintf.a
OBJS_DIR	=	./
OBJS		=	$(addprefix $(OBJS_DIR), $(FILES:.c=.o))

FILES	=	ft_printf.c \
			ft_putchar_fd_ptf.c \
			ft_puthexa_fd_ptf.c \
			ft_putnbr_fd_ptf.c \
			ft_putptr_fd_ptf.c \
			ft_putstr_fd_ptf.c \
			ft_putunsnbr_fd_ptf.c

################################################################################
#	Colors
################################################################################

NO_COLOR = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
CYAN = \033[0;96m
RED = \033[0;31m

################################################################################
#	Rules
################################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAMECC) compiled!$(NO_COLOR)"
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAMECC) optimised!$(NO_COLOR)"
	@make --silent good
	@make --silent separate

%.o: %.c
	@$(CC) $(FLAGWS) -c -o $@ $<
	@echo "$(YELLOW)Compiling: $< $(NO_COLOR)"

clean:
	@$(RM) $(OBJS)
	@echo "$(BLUE)$(NAMECC) object files cleaned!$(NO_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)$(NAMECC) executable files cleaned!$(NO_COLOR)"
	@echo ""

re: fclean all
	@echo "$(GREEN)$(NAMECC) RE compiled!$(NO_COLOR)"

.PHONY: all clean fclean re

################################################################################
#	Extra
################################################################################

separate:
	@echo ""
	@echo "$(BLUE)#####################################################################$(NO_COLOR)"
	@echo ""
	
good:
	@echo ""
	@echo "     /)                     (\\"
	@echo "    '/                       \'"
	@echo "___' (____               ____) '___"
	@echo ".... ((___)             (___)) ...."
	@echo ".....((____)           (____))....."
	@echo ".....((___)             (___))....."
	@echo "--.__((__)               (__))__.--"
	@echo ""

goodanime:
	@clear
	@echo ""
	@echo ""
	@echo ""
	@echo "__________               __________"
	@echo ".... ((___)             (___)) ...."
	@echo ".....((____)           (____))....."
	@echo ".....((___)             (___))....."
	@echo "--.__((__)               (__))__.--"
	@sleep 0.5
	@clear
	@echo ""
	@echo ""
	@echo ""
	@echo "____/)____               ____(\____"
	@echo ".... ((___)             (___)) ...."
	@echo ".....((____)           (____))....."
	@echo ".....((___)             (___))....."
	@echo "--.__((__)               (__))__.--"
	@sleep 0.5
	@clear
	@echo ""
	@echo ""
	@echo "    /)                       (\\"
	@echo "___' (____               ____) '___"
	@echo ".... ((___)             (___)) ...."
	@echo ".....((____)           (____))....."
	@echo ".....((___)             (___))....."
	@echo "--.__((__)               (__))__.--"
	@sleep 0.5
	@clear
	@echo ""
	@echo "     /)                     (\\"
	@echo "    '/                       \'"
	@echo "___' (____               ____) '___"
	@echo ".... ((___)             (___)) ...."
	@echo ".....((____)           (____))....."
	@echo ".....((___)             (___))....."
	@echo "--.__((__)               (__))__.--"
	@echo ""

cafe:
	@echo ""
	@echo "             (         ) "
	@echo "	              )        ("
	@echo "               ___)...----)----....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo ' 
	@echo ""

cafeanime:
	@clear
	@echo ""
	@echo "                   ("
	@echo "	                     )     ("
	@echo "               ___...(-------)-....___"
	@echo '           .-""       )    (          ""-.'
	@echo "      .-''''|-._             )         _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "                 ("
	@echo "	                  )      ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""       )   (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "               ("
	@echo "	                  )     ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "             (         ) "
	@echo "	              )        ("
	@echo "               ___)...----)----....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@echo ""


mfrcomplainte:
	@clear
	@echo ""
	@echo "$(GREEN)HOOOO grand makfile divint, je t'implore de compiler mon program.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)Non.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)Mais tu m'avais promis de compiler.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)Non j'ai pas enive.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)Mais pourquoi ?$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)Tu me relira jusqu'a temps aue tu trouve ton erreur ou aue sombre dans la folie.$(NO_COLOR)"
	@sleep 0.3
	@echo "$(CYAN)HAAAA HAHAHAHAHA$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)Cruel que tu est.$(NO_COLOR)"
	@echo ""

mengcomplainte:
	@clear
	@echo ""
	@echo "$(GREEN)HOOOO great makfile divint, I implore you to compile my program.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)No.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)But you promised me to compile.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)No I do not want to.$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)But why ?$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(CYAN)You reread me until you find your error or sink into madness.$(NO_COLOR)"
	@sleep 0.3
	@echo "$(CYAN)HAAAA HAHAHAHAHA$(NO_COLOR)"
	@sleep 0.5
	@echo ""
	@echo "$(GREEN)Cruel that you are.$(NO_COLOR)"
	@echo ""
