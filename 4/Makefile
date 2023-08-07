TARGET = application
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c add.c
OBJ	= $(SRC:.c=.o)
# $() değişken kullanımını sağlıyor
# @echo yorum satırı yazıyoruz(@ işareti cmd üzerinde echo yazısının görülmesini engelliyor)
all: $(TARGET)

$(TARGET): $(OBJ)
	@echo "Linking and producing the final application"
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)  

%.o:%.c
	@echo "compiling the source file"
	$(CC) $(CFLAGS) $< -c $@
# $< .c dosyalı uzantılara tekabül ediyor(Herhangi bir ismi olan)
# $@ .o dosyalı uzantılara tekabül ediyor(Herhangi bir ismi olan)
clean:
	@echo "Removing everything except for the source files"
	rm -f $(TARGET) $(OBJ)

.PHONY: clean
