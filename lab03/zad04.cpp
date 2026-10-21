#include <iostream>
#include "Point.hpp"

int main() {

    Point p(3.5, 4.2);
    p.display();

    p.x = 1.1;
    p.y = 2.0;

    p.display();
}