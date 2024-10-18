#ifndef SEGMENT_HPP
#define SEGMENT_HPP


#include <iostream>
#include <cmath>
#include "point.hpp"

class Segment {
private:
    Point a;
    Point b;

public:
    Segment();
    Segment(double x1, double y1, double x2, double y2);
    Segment(Point x, Point y);
    Segment(const Segment &l);

    void setA(Point point);
    void setB(Point point);
    Point getA();
    Point getB();

    void translate(double z, double q);
    void centralSymmetry();
    void axialSymmetry(double x, double y, double z);
    void rotation(double alpha, double z, double q);


    double length();
    bool belongs(Point c);

    void print();
    friend std::ostream& operator<<(std::ostream& out, const Segment& A);
};
#endif