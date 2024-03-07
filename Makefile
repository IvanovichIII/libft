CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft

SOURCE = ft_*.c

all: $(TARGET)

$(TARGET): $(wildcard $(SOURCE)) 
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) *.o
