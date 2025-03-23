CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = matrix_program
SOURCES = main.cpp matrix.cpp
HEADERS = matrix.h
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean