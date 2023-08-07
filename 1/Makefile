TARGET = final
CC = gcc
CFLAGS = -Wall -Werror

# $() değişken kullanımını sağlıyor
# @echo yorum satırı yazıyoruz
all: $(TARGET)

$(TARGET): main.o add.o
	@echo "Linking and producing the final application"
	$(CC) $(CFLAGS)  main.o add.o -o final  
	@chmod +x final

main.o: main.c
	@echo "Compling the main file"	
	$(CC) $(CFLAGS) -c main.c

add.o: add.c
	@echo "Compling the add file"
	$(CC) $(CFLAGS) -c add.c

clean:
	@echo "Removing everything except for the source files"
	rm -f final *.o

.PHONY: clean