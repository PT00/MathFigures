#include "segment.hpp"

Segment::Segment()
{
    a = Point(0,0);
    b = Point(1,1);
}

Segment::Segment(double x1, double y1, double x2, double y2)
{
    if (x1 == x2 && y1 == y2)
        throw std::invalid_argument("Can't create a line segment with a length 0.");

    else
    {
        a = Point(0,0);
        b = Point(1,1);
    }
}

Segment::Segment(Point x, Point y)
{
    if (x.getX() == y.getX() && x.getY() == y.getY())
        throw std::invalid_argument("Can't create a line segment with a length 0.");

    else
    {
        a = x;
        b = y;
    }
}

Segment::Segment(const Segment& l)
{
    a = l.a;
    b = l.b;
}
void Segment::setA(Point point)
{
    a = point;
}
void Segment::setB(Point point)
{
    b = point;
}
Point Segment::getA()
{
    return a;
}

Point Segment::getB()
{
    return b;
}

void Segment::translate(double z, double q)
{
    a.translate(z,q);
    b.translate(z,q);

}

void Segment::centralSymmetry()
{
    a.centralSymmetry();
    b.centralSymmetry();
}

void Segment::axialSymmetry(double x, double y, double z)
{
    a.axialSymmetry(x, y, z);
    b.axialSymmetry(x, y, z);
}

void Segment::rotation(double alpha, double z, double q)
{
    a.rotation(alpha, z, q);
    b.rotation(alpha, z, q);
}

bool Segment::belongs(Point c)
{

    if ((c.getX() >= a.getX() && c.getY() >= a.getY() && c.getX() <= b.getX() && c.getY() <= b.getY())
        || (c.getX() <= a.getX() && c.getY() <= a.getY() && c.getX() >= b.getX() && c.getY() >= b.getY()))

    {
        double slope = (a.getY() - b.getY()) / (a.getX() - b.getX());
        double intersection = a.getY() - (a.getY() - b.getY()) / (a.getX() - b.getX()) * a.getX();

        if (abs(c.getY() - (slope * c.getX() + intersection)) <= 1e-7) //1e-7 = 0.0000001
            return true;
        return false;
    }
    return false;
}

double Segment::length()
{
    return sqrt(pow(b.getY() - a.getY(), 2) + pow(b.getX() - a.getX(), 2));
}

void Segment::print()
{
    std::cout << "((" << a.getX() << ", " << a.getY() << "), (" << b.getX() << ", " << b.getY()<< "))" << std::endl;
}
std::ostream& operator<<(std::ostream& out, const Segment& A)
{
    return out << "A = " << A.a << ", B = " << A.b;
}

