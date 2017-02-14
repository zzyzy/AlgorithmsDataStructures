cmake_minimum_required(VERSION 3.6)
project(AlgorithmsDataStructures)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/algorithms/Sorting.h
        src/data_structures/BST.cpp
        src/data_structures/BST.h
        src/programs/BSTProgram.h
        src/programs/IProgram.h
        src/programs/Programs.h
        src/programs/QuickSortProgram.h
        src/app.cpp)

add_executable(AlgorithmsDataStructures ${SOURCE_FILES})