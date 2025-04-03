CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./components

TARGET = main

SRC_DIR = ./components
SOURCES = $(shell find $(SRC_DIR) -type f -name '*.cpp') main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all compile build run clean

all: compile build run

compile: $(OBJECTS)

build: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
