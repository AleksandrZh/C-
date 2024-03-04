#include <iostream>
#include <cmath>
#include "triangle.h"
#include "side_error.h"

int main() {


    int sideA, sideB, sideC;

    std::cout << "Enter the length of the sides of the triangle: ";
    std::cin >> sideA;
    std::cin >> sideB;
    std::cin >> sideC;

    try {
        Triangle triangle(sideA, sideB, sideC);

        std::cout << "Area triangle: "
            << triangle.getSquare() << std::endl;
    }
    catch (SideError &err) {
        std::cout << "Error: ";
        err.printMessage();
    }
}