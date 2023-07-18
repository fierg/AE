//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "int_stack.h"
using namespace std;


int main() {
    int_stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.push(15);
    stack.push(15);
    stack.push(15);

    std::cout << "Top element: " << stack.getTop() << std::endl;

    int popped = stack.pop();
    std::cout << "Popped element: " << popped << std::endl;

    std::cout << "Top element after popping: " << stack.getTop() << std::endl;

    return 0;
}