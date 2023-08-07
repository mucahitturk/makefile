
CC = gcc
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
TARGET = final

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "Linking and producing the final application"
	$(CC) $(OBJS) -o $(TARGET)

.c.o:
	@echo "Compling the source files"
	$(CC) -c $< -o $@

clean:
	@echo "removing the project files"
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
