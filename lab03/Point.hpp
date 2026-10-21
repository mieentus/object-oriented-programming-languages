#pragma once
#include <iostream>

class Point {
public:
    double x, y;
    Point(double new_x, double new_y) {
        x = new_x;
        y = new_y;
    }

    void display() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};