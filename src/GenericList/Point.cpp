//
// Created by fierg on 7/18/23.
//
class Point {
public:
    Point(int x, int y) : x(x), y(y) {}

    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
private:
    int x;
    int y;
};