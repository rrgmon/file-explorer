CC = g++
CFLAGS = -std=c++17 -Wall -Wextra
TARGET = myls

all: $(TARGET)

$(TARGET): file_explorer.cpp
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET)

