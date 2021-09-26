#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 18:54:39 by jiglesia          #+#    #+#              #
#    Updated: 2021/09/26 09:45:03 by jiglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	bureaucrat

#****************** INC *******************#
# General
INC			=	./

INCLUDE		=	-I $(INC)

#***************** SRC* *******************#

DIRSRC		=	./src/

SRC			=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

SRCS		=	$(SRC)

#***************** DEPS ******************#

DIROBJ		=	./

OAUX		=	$(SRCS:%=$(DIROBJ)%)
DEPS		=	$(OAUX:.cpp=.d)
OBJS		=	$(OAUX:.cpp=.o)

ifdef FLAGS
	ifeq ($(FLAGS), no)
CFLAGS		=
	endif
	ifeq ($(FLAGS), debug)
CFLAGS		=	-Wall -Wextra -Werror -ansi -pedantic -g
	endif
else
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
endif

CC			=	/usr/bin/clang++
RM			=	/bin/rm -f
ECHO		=	/bin/echo -e
BOLD		=	"\e[1m"
BLINK		=	 "\e[5m"
RED			=	 "\e[38;2;255;0;0m"
GREEN		=	 "\e[92m"
BLUE		=	 "\e[34m"
YELLOW		=	 "\e[33m"
E0M			=	 "\e[0m"

#************************ DEPS COMPILATION *************************

%.o		:		../$(DIRSRC)/%.cpp
				@printf $(GREEN)"Generating minishell objects... %-33.33s\r" $@
				@$(CC) $(CFLAGS) $(INCLUDE) -MMD -o $@ -c $<

#************************ MAIN COMPILATION *************************

$(NAME)	:		$(OBJS)
				@$(CC)  $(INCLUDE) $(CFLAGS) -o $(NAME) $(OBJS) $(INC_LIB)

clean	:
				@($(RM) $(OBJS))
				@($(RM) $(DEPS))
				@$(ECHO) $(RED)'> Directory cleaned'$(E0M)

all		:		$(NAME)

fclean	:		clean
				@$(RM) $(NAME)
				@$(ECHO) $(RED)'> Executable removed'$(E0M)

re		:		fclean all

.PHONY	:		all clean re

-include $(DEPS)
