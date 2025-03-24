CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2

TARGET = matrix
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