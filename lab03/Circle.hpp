#pragma once
#include <math.h>
#include "Point.hpp"

class Circle {
private:
    double *m_radius;
public
    Point center;

    Circle(double r) {
        radius = new double;
        setRadius(r);
    }

    void setRadius(double r) {
        if(r <= 0) {
            std::cout << "Radius must be greater than 0" << std::endl;
            return;
        }
        *m_radius = r
    }

    double getRadius() {
        return *m_radius;
    }

    double area() {
        return M_PI * (*m_radius) * (*m_radius);
    }

    ~Circle() {
        delete radius;
    }
};