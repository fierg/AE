//
// Created by fierg on 7/18/23.
//

#ifndef CODE_INT_STACK_H
#define CODE_INT_STACK_H

#endif //CODE_INT_STACK_H

class int_stack{

private:
    int sz;
    int* A;
    int top;

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