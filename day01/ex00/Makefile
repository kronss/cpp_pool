#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochayche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/05 19:07:36 by ochayche          #+#    #+#              #
#    Updated: 2017/06/30 19:42:48 by vdoroshy         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++

CFLAGS = -Wall -Wextra -Werror
SHELL = /bin/sh

################################################################################
#	
################################################################################
NAME = pony

#********* -INC
INC_NAME =	header.hpp \
			Pony.class.hpp \
#add .hpp file ---->
INC_DIR =	inc
INC = $(addprefix $(INC_DIR)/, $(INC_NAME))

#********* -OBJ
OBJ_DIR =	.obj
OBJ = $(subst .cpp,.o,$(subst $(SRC_DIR)/,$(OBJ_DIR)/,$(SRC)))

#********* -SRC
SRC_DIR =	src
SRC = $(addprefix $(SRC_DIR)/, $(SRC_NAME))
SRC_NAME =	main.cpp \
			Pony.class.cpp \
# add .cpp file ---->

################################################################################
#	RULES
################################################################################

.PHONY: all clean fclean re t

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(CFLAGS) -I./inc/ $(OBJ) -o $(NAME)
	@echo "\033[33m'$(NAME)' compiling done.\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) -I./inc/ -c $(CFLAGS) $? -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


##############
# dell 

lite_clean:
	rm -rf $(OBJ_DIR)

rew: lite_clean $(NAME);
	
r:	$(NAME)
	./$(NAME)

bug:
	$(CC) $(CFLAGS)  -I./inc/ $(SRC) -g -o bug

debug: bug
	lldb -- ./bug
