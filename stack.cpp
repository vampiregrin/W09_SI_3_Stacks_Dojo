#include "Stack.h"
#include <iostream>
#include <cstdlib>
#include <array>

//Constructor
Stack::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}
//Destructor 
Stack::~Stack() {
    delete[] arr;
}

//Method to add an element to the stack
void Stack::push(int x)
{
    if (isFull())
    {
        std::cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    std::cout << "Inserting " << x << std::endl;
    arr[++top] = x;
}

//Method to remove a top element from the stack
int Stack::pop()
{
    if (isEmpty()) // check for stack underflow
    {
        std::cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    std::cout << "Removing " << peek() << std::endl;

    // decrease stack size by 1 and return the popped element
    return arr[top--];
}

//Method to return the top element of the stack
int Stack::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}

//Method to return the size of the stack
int Stack::size() {
    return sizeof(arr);
}

//Method to return the number of free spaces left
int Stack:: freeSpaces() {
    return (SIZE- sizeof(arr));
}

//Method to check if the stack is empty or not
bool Stack::isEmpty() {
    return top == -1;               // or return size() == 0;
}

// Method to check if the stack is full or not
bool Stack::isFull() {
    return top == capacity - 1;     // or return size() == capacity;
}
