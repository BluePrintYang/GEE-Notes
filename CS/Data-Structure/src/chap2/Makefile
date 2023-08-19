CXX = g++
CC = gcc
CXXFLAGS = -Wall -Wextra
CFLAGS = -Wall

# Set the output directory
OUTPUT_DIR = bin


# Find all .cpp and .c files in the directory
CPP_SRC_FILES = $(wildcard *.cpp)
C_SRC_FILES = $(wildcard *.c)

# List of source files
# CPP_SRC_FILES = hello1.cpp SqList2.cpp
# C_SRC_FILES = hello.c

# List of output executables
EXECUTABLES = $(CPP_SRC_FILES:%.cpp=$(OUTPUT_DIR)/%) $(C_SRC_FILES:%.c=$(OUTPUT_DIR)/%)

# Default target: compile all executables
all: $(EXECUTABLES)

# Rule to compile .cpp files into executables
$(OUTPUT_DIR)/%: %.cpp | $(OUTPUT_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

# Rule to compile .c files into executables
$(OUTPUT_DIR)/%: %.c | $(OUTPUT_DIR)
	$(CC) $(CFLAGS) -o $@ $<

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

clean:
	rm -rf $(OUTPUT_DIR)

.PHONY: all clean
