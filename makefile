CXX = clang++
CXXFLAGS += -std=c++11 -O2 -g -Wall

all:
	$(CXX) $(CXXFLAGS) -o bin/app.out src/app.cpp src/data_structures/BST.cpp

setup:
	mkdir -p bin

clean:
	rm -rf bin/*
	rm -rf obj/*