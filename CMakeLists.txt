cmake_minimum_required(VERSION 3.29)
project(42Luxembourg)

set(CMAKE_CXX_STANDARD 14)

include_directories(Core/Libft)

add_executable(42Luxembourg
    Core/Libft/ft_bzero.c
    Core/Libft/ft_isalnum.c
    Core/Libft/ft_isalpha.c
    Core/Libft/ft_isascii.c
    Core/Libft/ft_isdigit.c
    Core/Libft/ft_isprint.c
    Core/Libft/ft_memcpy.c
    Core/Libft/ft_memmove.c
    Core/Libft/ft_memset.c
    Core/Libft/ft_strchr.c
    Core/Libft/ft_strlcat.c
    Core/Libft/ft_strlcpy.c
    Core/Libft/ft_strlen.c
    Core/Libft/ft_strncmp.c
    Core/Libft/ft_tolower.c
    Core/Libft/ft_toupper.c
    Core/Libft/libft.h
        Core/Libft/ft_atoi.c)
