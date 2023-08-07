
CC = gcc
SRC_DIR  = ./src
INC_DIR  = ./inc
OUT_DIR  = ./bin
OBJS = $(OUT_DIR)/main.o $(OUT_DIR)/add.o
TARGET = final

all: $(TARGET)

$(TARGET): main.o add.o
	@echo "Linking and producing the final application"
	$(CC) $(OBJS) -o $(OUT_DIR)/$(TARGET)

main.o:
	@echo "compling the main file"
	$(CC) -I "./inc" -c $(SRC_DIR)/main.c -o  $(OUT_DIR)/main.o

add.o:
	@echo "compling the add file"
	$(CC) -I "./inc" -c $(SRC_DIR)/add.c -o  $(OUT_DIR)/add.o
 
clean:
	@echo "removing the project files"
	rm -f $(OUT_DIR)/*.o
	rm -f $(OUT_DIR)/$(TARGET)

.PHONY: all clean
