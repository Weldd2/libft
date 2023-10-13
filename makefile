NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = bzero.c memcpy.c memccpy.c memmove.c memset.c
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
