#include "triangle.hpp"
#include "global.hpp"

Triangle::Triangle()
{
    a = Point(0, 0);
    b = Point(1, 0);
    c = Point(0, 1);

}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
    if (x1 == x2 && x2 == x3 && y1 == y2 && y2 == y3)
        throw std::invalid_argument("Can't create a triangle with one side 0.");

    double z1 = (y1 - y2) / (x1 - x2);
    double z2 = (y2 - y3) / (x2 - x3);

    if (z1 == z2)
        throw std::invalid_argument("Points are in the same line.");

    else
    {
        a = Point(0, 0);
        b = Point(1, 0);
        c = Point(0, 1);
    }
}

Triangle::Triangle(Point d, Point e, Point f)
{
    if (d.getX() == e.getX() && e.getX() == f.getX() && d.getY() == e.getY() && e.getY() == f.getY())
        throw std::invalid_argument("Can't create a triangle with one side 0.");

    double z1 = (d.getY() - e.getY()) / (d.getX() - e.getX());
    double z2 = (e.getY() - f.getY()) / (e.getX() - f.getX());

    if (z1 == z2)
        throw std::invalid_argument("Points are in the same line.");

    else
    {
        a = d;
        b = e;
        c = f;
    }
}

Triangle::Triangle(const Triangle& t)
{
    a = t.a;
    b = t.b;
    c = t.c;
}

void Triangle::setA(Point point)
{
    a = point;
}

void Triangle::setB(Point point)
{
    b = point;
}

void Triangle::setC(Point point)
{
    c = point;
}

Point Triangle::getA()
{
    return a;
}

Point Triangle::getB()
{
    return b;
}

Point Triangle::getC()
{
    return c;
}

void Triangle::translate(double z, double q)
{
    a.translate(z,q);
    b.translate(z,q);
    c.translate(z,q);
}

void Triangle::rotation(double alpha, double z, double q)
{
    a.rotation(alpha, z, q);
    b.rotation(alpha, z, q);
    c.rotation(alpha, z, q);
}
void Triangle::centralSymmetry()
{
    a.centralSymmetry();
    b.centralSymmetry();
    c.centralSymmetry();
}
void Triangle::axialSymmetry(double d, double e, double f)
{
    a.axialSymmetry(d, e, f);
    b.axialSymmetry(d, e, f);
    c.axialSymmetry(d, e, f);
}

double Triangle::perimeter()
{
    return distance(a,b) + distance(b,c) + distance(c,a);
}

double Triangle::area()
{
    return (abs((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX()))) / 2;
}

bool Triangle::isPointInside(Point p) {
    double sideAB = side(a,b,p);
    double sideBC = side(b,c,p);
    double sideCA = side(c,a,p);
    return (sideAB >= 0 && sideBC >= 0 && sideCA >= 0) || (sideAB <= 0 && sideBC <= 0 && sideCA <= 0);
}

void Triangle::print()
{
    std::cout << "(" << a.getX() << ", " << a.getY() << "), (" << b.getX() << ", " << b.getY()<< "), (" << c.getX() << ", " << c.getY() << "))" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Triangle& t)
{
    return out << "A = " << t.a << ", B = " << t.b << ", C = " << t.c;
}