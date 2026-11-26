# Makefile for DSA Analyzer

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Include directories
INCLUDES = -Isrc

# Find all .cpp files starting from src directory
SRCS = $(shell find src -name "*.cpp")

# Object files
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = dsa_analyzer

# Default rule
all: $(TARGET)

# Link the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(TARGET) $(OBJS)

# Compile source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean rule
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
