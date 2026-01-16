CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
LDFLAGS =

TARGET = build/app.exe

SRC = \
	src/main.c \
	src/matrix.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

format:
	clang-format -i src/*.c src/*.h

cppcheck:
	cppcheck --enable=all --inconclusive --quiet \
	--suppress=missingIncludeSystem \
	--suppress=checkersReport \
	--suppress=unmatchedSuppression \
	--suppress=unusedFunction \
	src 


clean:
	rm -f $(TARGET)

.PHONY: all run format cppcheck clean
