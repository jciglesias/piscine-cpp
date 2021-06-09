#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/04 22:48:40 by jiglesia          #+#    #+#              #
#    Updated: 2021/06/09 13:57:58 by jiglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	megaphone

#***************** SRC* *******************#

DIRSRC		=	./

SRC			=	megaphone.cpp

#***************** DEPS ******************#

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
				@$(CC) $(CFLAGS) -MMD -o $@ -c $<

#************************ MAIN COMPILATION *************************

$(NAME)	:		$(OBJS)

clean	:
				@($(RM) $(OBJS))
				@($(RM) $(DEPS))

all		:		$(NAME)

fclean	:		clean
				@$(RM) $(NAME)

re		:		fclean all

.PHONY	:		all clean re
