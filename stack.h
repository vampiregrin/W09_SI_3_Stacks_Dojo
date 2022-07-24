#pragma once
#include <iostream>
#include <sstream>
#include <string.h>

// Define the default capacity of the stack
#define SIZE 10

class Stack
{
    int top, capacity, * arr;

public:
    Stack(int size = SIZE);         // constructor
    ~Stack();                       // destructor

    void push(int);
    int pop();
    int peek();
    int size();
    int freeSpaces();
    bool isEmpty();
    bool isFull();
}; 