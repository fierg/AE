//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "int_stack.h"
using namespace std;


int main() {
    int_stack stack;

    stack.push(5);

    std::cout << "Top element: " << stack.getTop() << std::endl;

    int popped = stack.pop();
    std::cout << "Popped element: " << popped << std::endl;

    stack.push(5);

    std::cout << "Top element after popping: " << stack.getTop() << std::endl;

    stack.pop();

    return 0;
}