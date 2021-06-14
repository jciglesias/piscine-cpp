#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/04 22:48:40 by jiglesia          #+#    #+#              #
#    Updated: 2021/06/12 20:05:01 by jiglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	phonebook

#****************** INC *******************#
# General
INC			=	./include/

INCLUDE		=	-I $(INC)

#***************** SRC* *******************#

DIRSRC		=	./

SRC			=	phonebook.cpp Book.class.cpp

#***************** DEPS ******************#


DIROBJ		=	./

OAUX		=	$(SRC:%=$(DIROBJ)%)
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
CFLAGS		=	-Wall -Wextra -Werror
endif

CC			=	/usr/bin/clang++
RM			=	/bin/rm -f

#************************ DEPS COMPILATION *************************

%.o		:		../$(DIRSRC)/%.cpp
				@$(CC) $(CFLAGS) $(INCLUDE) -MMD -o $@ -c $<

#************************ MAIN COMPILATION *************************

$(NAME)	:		$(OBJS)
				@$(CC) $(INCLUDE) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
				@($(RM) $(OBJS))

all		:		$(NAME)

fclean	:		clean
				@$(RM) $(NAME)

re		:		fclean all

.PHONY	:		all clean re
