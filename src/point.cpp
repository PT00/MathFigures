#include "point.hpp"
#include <cmath>
Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double xVal, double yVal)
{
    x = xVal;
    y = yVal;
}

Point::Point(const Point& point)
{
    x = point.x;
    y = point.y;
}

void Point::translate(double z, double q)
{
    x = x + z;
    y = y + q;
}


void Point::setX(double value)
{
    x = value;
}

void Point::setY(double value)
{
    y = value;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

void Point::rotation(double alpha, double z, double q)
{
    if (alpha > 360 || alpha < 0)
    {
        throw std::invalid_argument("Alpha must be in range: (0,360)");
    }
    double radian = alpha * M_PI / 180.0;
    x = (x - z) * cos(radian) - (y - q) * sin(radian) + z;
    y = (x - z) * sin(radian) + (y - q) * cos(radian) + q;
}

void Point::centralSymmetry()
{
    x *= -1;
    y *= -1;
}

void Point::axialSymmetry(double a, double b, double c) //prosta w postaci ogolnej!
{
    if (a == 0 && b == 0)
    {
        throw std::invalid_argument("a or b must be different than 0");
    }
    x = 2 * ((b * (b * x - a * y) - a * c) / (a * a + b * b)) - x;
    y = 2 * ((a * (-b * x + a * y) - b * c) / (a * a + b * b)) - y;
}

void Point::print()
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Point& A)
{
    return out << "(" << A.x << ", " << A.y << ")";
}