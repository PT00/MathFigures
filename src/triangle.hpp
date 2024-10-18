#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <iostream>
#include <cmath>
#include "point.hpp"

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle();

    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    Triangle(Point d, Point e, Point f);

    Triangle(const Triangle &t);
    void setA(Point point);
    void setB(Point point);
    void setC(Point point);
    Point getA();
    Point getB();
    Point getC();

    void translate(double z, double q);
    void rotation(double alpha, double z, double q);
    void centralSymmetry();
    void axialSymmetry(double d, double e, double f);

    double area();
    double perimeter();
    bool isPointInside(Point p);

    void print();
    friend std::ostream& operator<<(std::ostream& out, const Triangle& t);
};
#endif