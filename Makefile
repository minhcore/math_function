CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
LDFLAGS =

TARGET = build/app.exe

SRC = src/main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

format:
	clang-format -i src/*.c include/*.h

cppcheck:
	cppcheck --enable=all --inconclusive --quiet \
	--suppress=missingIncludeSystem \
	--suppress=checkersReport \
	--suppress=unmatchedSuppression \
	src include


clean:
	rm -f $(TARGET)

.PHONY: all run format cppcheck clean
