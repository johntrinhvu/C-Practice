CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
TARGET = DynamicArrayApp
OBJS = DynamicArray.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

DynamicArray.o: DynamicArray.cpp DynamicArray.h
	$(CXX) $(CXXFLAGS) -c DynamicArray.cpp

main.o: main.cpp DynamicArray.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJS) $(TARGET)
