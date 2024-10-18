#ifndef GLOBALFUNCTIONS_HPP
#define GLOBALFUNCTIONS_HPP

#include <cmath>
#include <iostream>
#include "point.hpp"
#include "segment.hpp"
#include "triangle.hpp"

//Point
double distance(Point a, Point b);
//Segment
bool parallel(Segment c, Segment d);
bool perpendicular(Segment c, Segment d);
//Triangle
bool areDisjoint(Triangle t1, Triangle t2);
bool contains(Triangle t1, Triangle t2);
double side(Point x, Point y, Point p);

#endif