//
// Created by fierg on 7/18/23.
//
class stack_elem {
public:
    stack_elem *drunter;
    int wert;
    stack_elem(int x, stack_elem *d) {
        wert = x;
        drunter = d;
    }
};