# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall -std=c++11

# the build target executable:
TARGET = myprogram
SOURCE = solution

all: $(TARGET)
	
$(TARGET): $(SOURCE).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE).cpp

clean:
	$(RM) $(TARGET)