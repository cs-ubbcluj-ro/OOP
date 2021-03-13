cmake_minimum_required(VERSION 3.17)
project(OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOP
        Lectures/Lecture_1/Arrays.c
        Lectures/Lecture_1/Casting.cpp
        Lectures/Lecture_1/CStrings.c
        Lectures/Lecture_1/DataTypes.c
        Lectures/Lecture_1/Functions.cpp
        Lectures/Lecture_1/HelloWorld.cpp
        Lectures/Lecture_1/HelloWorldC.c
        Lectures/Lecture_1/Pointers.c
        Lectures/Lecture_1/ReadWrite.c
        Lectures/Lecture_1/Statements.c
        Lectures/Lecture_1/StructExample.c
        Lectures/Lecture_2/ConstPointers.c
        Lectures/Lecture_2/DynamicArray.h
        Lectures/Lecture_2/DynamicArray.c
        Lectures/Lecture_2/DynamicMemoryManagement.cpp
        Lectures/Lecture_2/DynamicMemoryManagementC.c
        Lectures/Lecture_2/main.c
        Lectures/Lecture_2/NullDanglingPointers.c
        Lectures/Lecture_2/Planet.c
        Lectures/Lecture_2/Planet.h
        Lectures/Lecture_2/PointersToFunctions.c
        Lectures/Lecture_3/c_plus.cpp
        Lectures/Lecture_3/vector_ex1.cpp
        Lectures/Lecture_3/vector_ex2.cpp
        Lectures/Lecture_3/vector_ex3.cpp
        Lectures/Lecture_3/vector_v1/Vector2D.h
        Lectures/Lecture_3/vector_v1/Vector2D.cpp
        Lectures/Lecture_3/vector_v2/Vector2D.h
        Lectures/Lecture_3/vector_v2/Vector2D.cpp
        Lectures/Lecture_3/vector_v3/Vector2D.h
        Lectures/Lecture_3/vector_v3/Vector2D.cpp
        Lectures/Lecture_3/vector_v3/DynamicVector.h
        Lectures/Lecture_3/vector_v3/DynamicVector.cpp
        Lectures/Lecture_4/FunctionTemplate.cpp
        )
