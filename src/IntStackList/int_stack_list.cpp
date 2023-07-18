//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "int_stack.h"
#include <stdexcept>

int_stack::int_stack() { //Konstruktor
    oberste = nullptr;
}
int_stack::~int_stack() {
    while (!empty()) pop();
}
int int_stack::pop() {
    if (oberste == nullptr){
        throw std::runtime_error("Stack leer.");
    } else {
        int wert = oberste->wert;
        oberste = oberste->drunter;
        return wert;
    }
}
int int_stack::getTop() const {
    if (oberste == nullptr){
        throw std::runtime_error("Stack leer.");
    }
    return oberste->wert;
}
void int_stack::push(int x) { oberste = new stack_elem(x, oberste); }
bool int_stack::empty() const { return oberste == nullptr; }