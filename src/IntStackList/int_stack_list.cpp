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

int_stack::int_stack(const int_stack &S) {
    if (this == &S) return;
    while (!empty()) pop();
    stack_elem *elem = oberste;
    while (elem != nullptr) {
        push(elem->wert);
        elem = elem->drunter;
    }
}

int_stack &int_stack::operator=(const int_stack& S){
    if (this == &S) return *this;
    while (!empty()) pop();
    while (!S.empty());
    stack_elem *elem = oberste;
    while (elem != nullptr) {
        push(elem->wert);
        elem = elem->drunter;
    }
    return *this;
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