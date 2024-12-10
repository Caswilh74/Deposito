# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 15:27:56 by gcarvalh          #+#    #+#              #
#    Updated: 2024/11/21 11:01:07 by gcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Base Sources
SRCS 		= ft_printf.c \
			  ft_put_characters.c \
			  ft_put_numbers.c

# Base Objects
OBJS 		= $(SRCS:.c=.o)

# Compilation Variables
# ============================================

NAME 		= libftprintf.a
CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra -g
INCS 		= -I .
AR			= ar crs
RM			= rm -rf

# Color Codes
# ============================================
Ciano 		= Ciano = \e[1;96m
RESET 		= \033[0m

##############################################
#                Compilation Rules           #
##############################################

# Compile .c files into .o files
.c.o:
		@echo "$(Ciano)Compiling $<...$(RESET)"
		$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

# Link all base object files into the base library archive
$(NAME): $(OBJS)
		@echo "$(Ciano)Creating base library $(NAME)...$(RESET)"
		$(AR) $@ $^

##############################################
#               Main Commands                #
##############################################

# Default target, builds the base library only
all: $(NAME)

##############################################
#             Cleaning Commands              #
##############################################

# Remove object files
clean:
		@echo "$(Ciano)Cleaning up object files...$(RESET)"
		$(RM) $(OBJS)

# Full clean: remove library files as well
fclean: clean
		@echo "$(Ciano)Removing $(NAME)...$(RESET)"
		$(RM) $(NAME)

# Rebuild everything from scratch
re: fclean all

##############################################
#                Phony Targets               #
##############################################

.PHONY: all clean fclean re