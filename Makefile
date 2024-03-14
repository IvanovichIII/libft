CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_strlen.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strncmp.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strnstr.c \
		 ft_atoi.c \
		 ft_calloc.c \
		 ft_strdup.c \
		 ft_substr.c \
		 ft_strjoin.c \
<<<<<<< HEAD
		 ft_strtrim.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
=======
		 ft_strtrim.c 
>>>>>>> 1ee65335d5d53ebc8cfcf25cfebe0aec5b502bb5

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ) 

re: clean all

.PHONY: all clean fclean re
