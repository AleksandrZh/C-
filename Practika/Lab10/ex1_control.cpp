#include <iostream>
#include "dot.h"
#include "triangle.h"

int main() {

    Dot *point1 = new Dot();
    Dot *point2 = new Dot(0, 3);
    Triangle triangle(point1, point2, 4, 0);

    triangle.showSide();
    std::cout << "Perimeter triangle: " << triangle.getPerimeter() << std::endl;
    std::cout << "Area triangle: " << triangle.getSquare() << std::endl;

    delete point1;
    delete point2;
}
