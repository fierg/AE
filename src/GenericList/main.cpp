//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "Point.cpp"
#include "List.cpp"

int main(){
    List<Point> pointList;

    Point p1(2, 3);
    Point p2(4, 5);
    Point p3(6, 7);

    pointList.insert(p1);
    pointList.insert(p2);
    pointList.insert(p3);

    ListElement<Point>* current = pointList.getHead();
    while (current != nullptr) {
        Point point = current->getData();
        std::cout << "Point: (" << point.getX() << ", " << point.getY() << ")" << std::endl;
        current = current->getNext();
    }

    return 0;
}