#include <iostream>
#include <cmath>

double getTriangleSquare(double);
double getTriangleSquare(double, double, double);

int main() {
    constexpr double fSide = 3;
    constexpr double fSide1 = 3;
    constexpr double fSide2 = 4;
    constexpr double fSide3 = 5;

    std::cout << "Area of ​​an equilateral triangle with side "
              << fSide << " equal to " << getTriangleSquare(fSide) << std::endl;
    std::cout << "Area of ​​a scalene triangle with sides "
              << fSide1 << ", " << fSide2 << ", " << fSide3 << " equal to "
              << getTriangleSquare(fSide1, fSide2, fSide3) << std::endl;
}

double getTriangleSquare(double side) {
    return std::sqrt(3) * std::pow(side, 2) / 4;
}

double getTriangleSquare(double side1, double side2, double side3) {
    double p = (side1 + side2 + side3) / 2;
    return std::sqrt(p * (p - side1) * (p - side2) * (p - side3));
}