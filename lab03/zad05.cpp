#include <iostream>
#include "Circle.hpp"

int main() {

    Circle cir(2.0);

    cir.center.x = 1.0;
    cir.center.y = 2.5;

    std::cout << cir.getRadius() << std::endl;
    
    cir.setRadius(-1);

    std::cout << cir.area() << std::endl;

}