//
// Created by fierg on 7/18/23.
//
#ifndef CODE_INT_STACK_H
#define CODE_INT_STACK_H

#endif //CODE_INT_STACK_H

class int_stack{

private:
    struct stack_elem {
    public:
        stack_elem *drunter;
        int wert;
        stack_elem(int x, stack_elem *d) {
            wert = x;
            drunter = d;
        }
    };
    stack_elem *oberste;

public:
    int_stack(); //Konstruktor
    ~int_stack(); //Destruktor
    int_stack(const int_stack& S); // Kopie-Konstruktor
    int_stack& operator=(const int_stack& S); // Zuweisungsoperator
    void push(int x);
    int pop();
    int getTop() const;
    bool empty() const;
    void resize(int new_size);
};