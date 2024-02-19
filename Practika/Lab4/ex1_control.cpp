#include <iostream>
#include <cmath>
int calculateQuadraticEquation(double, double, double,
                               double&, double&);

int main() {
    double paramA, paramB, paramC;
    double root1, root2;
    int status;

    std::cout << "Enter the coefficients of a quadratic equation of the form "
              << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "Coeff a: ";
    std::cin >> paramA;
    std::cout << "Coeff b: ";
    std::cin >> paramB;
    std::cout << "Coeff c: ";
    std::cin >> paramC;

    status = calculateQuadraticEquation(paramA, paramB, paramC,
                                        root1, root2);
    if (status == 1) {
        std::cout << "Roots "
                  << "x1 = " << root1
                  << ", x2 = " << root2 << std::endl;
    } else if (status == 0) {
        std::cout << "Roots x1 = x2 = "
                  << root1 << std::endl;
    } else {
        std::cout << "There are no roots of the equation" << std::endl;
    }
}

int calculateQuadraticEquation(double paramA, double paramB, double paramC,
                               double &root1, double &root2) {
    double discriminant = std::pow(paramB, 2) - 4 * paramA * paramC;
    
    if (discriminant < 0) {
        return -1;
    }

    root1 = (-paramB + std::sqrt(discriminant)) / (2 * paramA);

    if (discriminant > 0) {
        root2 = (-paramB - std::sqrt(discriminant)) / (2 * paramA);
        return 1;
    }
    else {
        return 0;
    }
}