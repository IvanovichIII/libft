CC = gcc
FLAGS = -Wall -Wextra -Werror
NOMBRE = libft

SOURCE = ft_*.c

all: $(TARGET)

$(TARGET): $(wildcard $(SOURCE)) 
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) *.o
