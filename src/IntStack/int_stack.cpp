//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "int_stack.h"
#include <stdexcept>

int_stack::int_stack() {
    sz = 2; //auf 100 Elemente vordefniert
    A = new int[sz];
    top = -1;
}
int_stack::~int_stack() {
    delete[] A;
}
int_stack::int_stack(const int_stack &S) {
    if (this == &S) return;
    delete[] A;
    sz = S.sz;
    top = S.top;
    A = new int[sz];
    for (int i = 0; i < sz; i++) A[i] = S.A[i];
}
int_stack &int_stack::operator=(const int_stack &S) {
    if (this == &S) return *this;
    delete[] A;
    sz = S.sz;
    top = S.top;
    A = new int[sz];
    for (int i = 0; i < sz; i++) A[i] = S.A[i];
    return *this;
}
void int_stack::push(int x) {
    if (top + 1 >= sz) {resize(sz * 2);}
    A[++top] = x;
}

void int_stack::resize(int new_size) {
    std::cout << "Resizing stack to: " << new_size << std::endl;
    int *new_array = new int[new_size];
    for (int i = 0; i <= top; i++) {new_array[i] = A[i];}
    delete[] A;
    A = new_array;
    sz = new_size;
}
int int_stack::pop() {
    if (top == -1) throw std::runtime_error("Stack leer.");
    return A[top--];
}
int int_stack::getTop() const {
    if (top == -1) throw std::runtime_error("Stack leer.");
    return A[top];
}
bool int_stack::empty() const { return top == -1; }