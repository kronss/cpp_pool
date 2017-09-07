CC       = clang++
CFLAGS   = -Wall -Wextra -Werror

################################################################################
# main
################################################################################
NAME     = megaphone

#********* -INC
# INC_NAME =
# INC_DIR =
# INC = $(addprefix $(INC_DIR)/, $(INC_NAME))

#********* -OBJ
OBJ_DIR  = ./.obj
OBJ = $(subst .cpp,.o,$(subst $(SRC_DIR)/,$(OBJ_DIR)/,$(SRC)))

#********* -SRC 
SRC_DIR  = ./src
SRC = $(addprefix $(SRC_DIR)/, $(SRC_NAME))
SRC_NAME = megaphone.cpp
# add .cpp file ---->

################################################################################
#	RULES
################################################################################

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[33m'$(NAME)' compiling done.\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) -c $(CFLAGS) $? -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

rewq:
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

rew: rewq all

r:	all
	./$(NAME)