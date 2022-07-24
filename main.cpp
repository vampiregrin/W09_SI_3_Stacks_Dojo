#include "Stack.h"
#include <iostream>
#include <string>

int main()
{
    Stack pt(3);

    pt.push(1);
    pt.push(2);

    pt.pop();
    pt.pop();

    pt.push(3);

    std::cout << "The top element is " << pt.peek() << std::endl;
    std::cout << "The stack size is " << pt.size() << std::endl;
    std::cout << "There are" << pt.freeSpaces() << "free spaces left" << std::endl;

    pt.pop();

    if (pt.isEmpty()) {
        std::cout << "The stack is empty\n";
    }
    else {
        std::cout << "The stack is not empty\n";
    }

    return 0;
}
