NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = memset.c bzero.c memcpy.c memccpy.c memmove.c \
       memchr.c memcmp.c strlen.c strdup.c strcpy.c \
       strncpy.c strcat.c strncat.c strlcat.c strchr.c \
       strrchr.c strstr.c strnstr.c strcmp.c strncmp.c \
       atoi.c isalpha.c isdigit.c isalnum.c isascii.c \
       isprint.c toupper.c tolower.c
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
