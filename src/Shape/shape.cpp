//
// Created by fierg on 7/18/23.
//
#include <iostream>
using namespace std;

struct window{}; //undeclared...

class shape{ // interface
public:
    virtual void translate(double dx, double dy) = 0;
    virtual void rotate(double x, double y) = 0 ;
    virtual void write(ostream& out) = 0;
    virtual void read(istream& in) = 0;
    virtual void draw(window& win);
};
class picture{
    shape* A[1000]; // polymorphes Container
    int count;
    void insert(shape* p){A[count++]=p;}
    void remove(int i){A[i]=A[--count];}
    void draw(window& win){ for (int i=0;i<count; i++) A[i]->draw(win);}
    void translate(double dx,double dy){for (int i=0;i<count; i++) A[i]->translate(dx,dy);}
    void write(ostream out){for (int i=0;i<count; i++)A[i]->write(out);}
    void read(istream in){for (int i=0;i<count; i++)A[i]->read(in);}
};

