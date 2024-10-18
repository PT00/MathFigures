#include "global.hpp"
double distance(Point a, Point b)
{
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

bool parallel(Segment c, Segment d)
{
    double q = (c.getA().getY() - c.getB().getY()) / (c.getA().getX() - c.getB().getX());
    double z = (d.getA().getY() - d.getB().getY()) / (d.getA().getX() - d.getB().getX());

    if (q == z)
        return true;
    else
        return false;
}

bool perpendicular(Segment c, Segment d)
{
    double q = (c.getA().getY() - c.getB().getY()) / (c.getA().getX() - c.getB().getX());
    double z = (d.getA().getY() - d.getB().getY()) / (d.getA().getX() - d.getB().getX());

    if (q == (-1 / z))
        return true;
    else
        return false;
}

bool areDisjoint(Triangle first, Triangle second)
{
    if (second.isPointInside(first.getA()) || second.isPointInside(first.getB()) || second.isPointInside(first.getC()))
    {
        return false;
    }
    if (first.isPointInside(second.getA()) || first.isPointInside(second.getB()) || first.isPointInside(second.getC()))
    {
        return false;
    }
    return true;
}

bool contains(Triangle first, Triangle second)
{
    if (second.isPointInside(first.getA()) && second.isPointInside(first.getB()) && second.isPointInside(first.getC()))
    {
        return true;
    }
    if (first.isPointInside(second.getA()) && first.isPointInside(second.getB()) && first.isPointInside(second.getC()))
    {
        return true;
    }
    return false;
}

double side(Point x, Point y, Point p){
    return (y.getY() - x.getY()) * (p.getX() - x.getX()) - (y.getX() - x.getX()) * (p.getY() - x.getY());
}

