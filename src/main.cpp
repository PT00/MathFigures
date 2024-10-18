#include <iostream>
#include "point.hpp"
#include "segment.hpp"
#include "triangle.hpp"
#include "global.hpp"

int main() {
    Point a(3, 2);
    Point b(1,2);
    Point c(3,5);

    std::cout << "Figures classes methods Test:\n" << std::endl;

    //POINT CLASS METHODS
    std::cout << "1. Point class methods:" << std::endl;
    std::cout << "   Point 'a' is declared (for each method from this class) as: " << a;
    std::cout << "\n   We can take the first coordinate of a point with getX(): " << a.getX() << std::endl;
    std::cout << "   We can also take the second coordinate with getY(): " << a.getY() << std::endl;
    std::cout << "\n   To translate a point you can use translate() method: " << std::endl;
    std::cout << "     using a.translate(5,3)..." << std::endl;
    a.translate(5,3);
    std::cout << "     After translation: " << a << std::endl;
    a.setX(3);
    a.setY(2);
    std::cout <<"\n   To rotate a point use rotation() method:" << std::endl;
    std::cout << "     using a.rotation(180, 1, 0)..." << std::endl;
    a.rotation(180,1,0);
    std::cout << "     After rotation: " << a << std::endl;
    a.setX(3);
    a.setY(2);
    a.centralSymmetry();
    std::cout << "\n   Central Symmetry(a.centralSymmetry()): " << a << std::endl;
    a.setX(3);
    a.setY(2);
    a.axialSymmetry(1,-2,6);
    std::cout << "\n   Axial Symmetry(a.axialSymmetry(1,-2,6)): " << a << std::endl;



    //SEGMENT CLASS METHODS
    Segment line(b,c);
    std::cout << "\n2. Segment class methods:" << std::endl;
    std::cout << "   Segment 'line' is declared (for each method from this class) as: " << line << std::endl;
    std::cout << "\n   We can take the first point of a segment with getA(): (" << line.getA().getX() << ", " << line.getA().getY() << ")" << std::endl;
    std::cout << "   We can also take the second point with getB(): (" << line.getB().getX() << ", " << line.getB().getY() << ")" << std::endl;
    std::cout << "\n   To translate a segment you can use translate() method: " << std::endl;
    std::cout << "     using line.translate(5,3)..." << std::endl;
    line.translate(5,3);
    std::cout << "     After translation: " << line << std::endl;
    line.setA(b);
    line.setB(c);
    std::cout <<"\n   To rotate a segment use rotation() method:" << std::endl;
    std::cout << "     using line.rotation(180, 1, 0)..." << std::endl;
    line.rotation(180,1,0);
    std::cout << "     After rotation: " << line << std::endl;
    line.setA(b);
    line.setB(c);
    line.centralSymmetry();
    std::cout << "\n   Central Symmetry(line.centralSymmetry()): " << line << std::endl;
    line.setA(b);
    line.setB(c);
    line.axialSymmetry(1,-2,6);
    std::cout << "   Axial Symmetry(line.axialSymmetry(1,-2,6)): " << line << std::endl;
    line.setA(b);
    line.setB(c);
    std::cout << "\n   You can check if the point belongs to the segment with belongs() method: " << std::endl;
    std::cout << "   If the result is 1, it belongs. If it's 0 it doesn't." << std::endl;
    std::cout << "     using line.belongs(b)...   (where b is (1,2))" << std::endl;
    std::cout << "     Result is: " << line.belongs(b) << std::endl;
    std::cout << "     That means that point 'b' belongs to the 'line' segment!" << std::endl;
    Point falseTest(100,100);
    std::cout << "\n     Second try. Now let's choose point that obviously does not belong to the segment" << std::endl;
    std::cout << "     using line.belongs(falseTest)...   (where falseTestPoint is (10,10))" << std::endl;
    std::cout << "     Result is: " << line.belongs(falseTest) << std::endl;
    std::cout << "     That means that point '(100,100)' doesn't belong to the 'line' segment!" << std::endl;

    b.setX(0);
    b.setY(0);
    c.setX(5);
    c.setY(0);
    line.setA(b);
    line.setB(c);
    std::cout << "\n   Use length() method to get the length of a segment: " << std::endl;
    std::cout << "     For: " << line << std::endl;
    std::cout << "     Length is: " << line.length() << std::endl;

    //TRIANGLE CLASS METHODS
    Point d(0,6);
    Point e(4,3);
    Point f(0,0);

    Triangle tri(d,e,f);

    std::cout << "\n3. Triangle class methods:" << std::endl;
    std::cout << "   Triangle 'tri' is declared (for each method from this class) as: " << tri << std::endl;
    std::cout << "\n   We can take the first point of a triangle with getA(): (" << tri.getA().getX() << ", " << tri.getA().getY() << ")" << std::endl;
    std::cout << "   We can also take the second point with getB(): (" << tri.getB().getX() << ", " << tri.getB().getY() << ")" << std::endl;
    std::cout << "   And also the third with getC(): (" << tri.getC().getX() << ", " << tri.getC().getY() << ")" << std::endl;
    std::cout << "\n   To translate a triangle you can use translate() method: " << std::endl;
    std::cout << "     using tri.translate(5,3)..." << std::endl;
    tri.translate(5,3);
    std::cout << "     After translation: " << tri <<std::endl;
    tri.setA(d);
    tri.setB(e);
    tri.setC(f);
    std::cout <<"\n   To rotate a triangle use rotation() method:" << std::endl;
    std::cout << "     using tri.rotation(180, 1, 5)..." << std::endl;
    tri.rotation(180,1,5);
    std::cout << "     After rotation: " << tri << std::endl;
    tri.setA(d);
    tri.setB(e);
    tri.setC(f);
    tri.centralSymmetry();
    std::cout << "\n   Central Symmetry(tri.centralSymmetry()): " << tri << std::endl;
    tri.setA(d);
    tri.setB(e);
    tri.setC(f);
    tri.axialSymmetry(1,-2,6);
    std::cout << "   Axial Symmetry(tri.axialSymmetry(1,-2,6)): " << tri << std::endl;
    tri.setA(d);
    tri.setB(e);
    tri.setC(f);
    std::cout << "\n   You can use area() method to get the area of a triangle: " << std::endl;
    std::cout << "     using tri.area()...    (tri = ((0,6), (4,3), (0,0)))" << std::endl;
    std::cout << "     The area of 'tri' triangle is: "<< tri.area() << std::endl;
    std::cout << "\n   You can use perimeter() method to get the perimeter of a triangle: " << std::endl;
    std::cout << "     using tri.perimeter()...    (tri = ((0,6), (4,3), (0,0)))" << std::endl;
    std::cout << "     The perimeter of 'tri' triangle is: "<< tri.perimeter() << std::endl;
    Point testPoint(1,1);
    Point falseTestPoint(10,10);
    std::cout << "\n   You can also check if the point is in the triangle with isPointInside() method: " << std::endl;
    std::cout << "   If the result is 1, it belongs. If it's 0 it doesn't." << std::endl;
    std::cout << "     using tri.isPointInside(testPoint)...   (where testPoint is (1,1))" << std::endl;
    std::cout << "     Result is: " << tri.isPointInside(testPoint) << std::endl;
    std::cout << "     That means that point '(1,1)' belongs to the 'tri' triangle!" << std::endl;
    std::cout << "\n     Second try. Now let's choose point that obviously does not belong to the triangle" << std::endl;
    std::cout << "     using tri.isPointInside(falseTestPoint)...   (where falseTestPoint is (10,10))" << std::endl;
    std::cout << "     Result is: " << tri.isPointInside(falseTestPoint) << std::endl;
    std::cout << "     That means that point '(10,10)' doesn't belong to the 'tri' triangle!" << std::endl;

    //GLOBAL FUNCTIONS
    Point q(0,6);
    Point z(3,12);
    Point p(4,3);
    Point t(10,5);
    Point w(0,0);
    Point j(3,5);

    Segment qz(q,z);
    Segment pt(p,t);

    Triangle qzp(q,z,p);
    Triangle twj(t,w,j);

    std::cout << "\n4. Global functions:" << std::endl;
    std::cout << "   You can use distance function to check the distance between two points: "<< std::endl;
    std::cout << "     The distance between (0,6) and (3,12) is: " << distance(q,z) << std::endl;
    std::cout << "\n   You can check if two segments are parallel with parallel() function:" << std::endl;
    std::cout << "   If function returns 1 that means they're parallel. If it's 0 they don't." << std::endl;
    std::cout << "     Let's try with ((0,6),(3,12)) and ((4,3),(10,5)):" << std::endl;
    std::cout << "     The result is: " << parallel(qz,pt) << std::endl;
    std::cout << "     That means they're not parallel!" << std::endl;
    std::cout << "\n   The perpendicular() method checks if two segments are perpendicular." << std::endl;
    std::cout << "   It also returns 1 if they're perpendicular and 0 if they're not." << std::endl;
    std::cout << "     Let's try again with ((0,6),(3,12)) and ((4,3),(10,5)):" << std::endl;
    std::cout << "     The result is: " << perpendicular(qz,pt) << std::endl;
    std::cout << "     That means they're not perpendicular!" << std::endl;
    std::cout << "\n   You can check if two triangles are disjoint with areDisjoint() function:" << std::endl;
    std::cout << "   If function returns 1 that means they're disjoint. If it's 0 they don't." << std::endl;
    std::cout << "     Let's try with ((0,6),(3,12),(4,3)) and ((10,5), (0,0), (3,5)):" << std::endl;
    std::cout << "     The result is: " << areDisjoint(qzp,twj) << std::endl;
    std::cout << "     That means they're not disjoint!" << std::endl;
    std::cout << "\n   You can use contains() function to check if two triangles contains each other:" << std::endl;
    std::cout << "   It also returns 1 if they're perpendicular and 0 if they're not." << std::endl;
    std::cout << "     Let's try again with ((0,6),(3,12),(4,3)) and ((10,5), (0,0), (3,5)):" << std::endl;
    std::cout << "     The result is: " << contains(qzp,twj) << std::endl;
    std::cout << "     That means they don't contain each other!" << std::endl;
    return 0;
}
