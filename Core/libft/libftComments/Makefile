PART1 = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strdup.c \

PART2 = ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \

SRC	= $(PART1) $(PART2)
NAME	= libft.a
CC	= cc
CFLAGS	= -Wall -Werror -Wextra 
RM	= rm -rf
LIBC	= ar rc
INCS	= ./

OBJS	= $(SRC:.c=.o)
BONUS_OBJS	= $(BONUS:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(LIBC) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus


# Makefile Breakdown
# ==================
#
# PART1 and PART2: Group source files for the library into manageable parts.
# BONUS: Contains additional functions for the bonus features of the library.
#
# SRC: Combines PART1 and PART2 to create a complete list of source files.
# NAME: Defines the output name of the library (libft.a).
# CC: Specifies the compiler to use (cc).
# CFLAGS: Compiler flags for enabling warnings and treating them as errors.
# RM: Command to remove files (used in clean and fclean).
# LIBC: Command for creating the archive (static library).
# INCS: Include directory for header files.
#
# OBJS: List of object files generated from the source files.
# BONUS_OBJS: List of object files for the bonus features.
#
# Rules:
# $(NAME): $(OBJS): Builds the static library from object files.
# %.o: %.c: Pattern rule for compiling .c files into .o files.
# all: Default target to build the library.
# bonus: Builds the library with bonus features included.
# clean: Removes all compiled object files.
# fclean: Cleans up everything, including the library file.
# re: Rebuilds the library from scratch by first cleaning.
# .PHONY: Declares certain targets as not files to ensure they always run.
#
# The Makefile facilitates easy compilation and management of the library,
# allowing you to build, clean, and maintain the library efficiently.
