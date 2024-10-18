#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double xVal, double yVal);
    Point(const Point& point);

    void setX(double value);
    void setY(double value);
    double getX();
    double getY();

    void translate(double z, double q);
    void rotation(double alpha, double z, double q);
    void centralSymmetry();
    void axialSymmetry(double a, double b, double c);
    void print();
    friend std::ostream& operator<<(std::ostream& out, const Point& A);
};
#endif