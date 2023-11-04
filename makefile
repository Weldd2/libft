NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = atoi.c bzero.c calloc.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c main.c memalloc.c memccpy.c memchr.c memcmp.c memcpy.c memdel.c memmove.c memset.c split.c strcat.c strchr.c strclr.c strcmp.c strcpy.c strdel.c strdup.c strequ.c striter.c striteri.c strjoin.c strlcat.c strlen.c strmap.c strmapi.c strncat.c strncmp.c strncpy.c strnequ.c strnew.c strnstr.c strrchr.c strstr.c strtrim.c substr.c tolower.c toupper.c
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

ifeq ($(OS),Windows_NT)
	RM = cmd /c del /Q /F
else
	RM = rm -rf
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
