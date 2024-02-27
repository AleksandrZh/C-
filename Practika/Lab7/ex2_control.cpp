#include <iostream>
#include <cmath>

struct Root {
    double root1;
    double root2;
};

Root calculateQuadraticEquation(const double, const double, const double, int&);

int main() {
    

    double paramA, paramB, paramC;
    Root root;
    int status;

    std::cout << "Enter the coefficients of a quadratic equation of the form "
              << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "Coefficient a: ";
    std::cin >> paramA;
    std::cout << "Coefficient b: ";
    std::cin >> paramB;
    std::cout << "Coefficient c: ";
    std::cin >> paramC;

    root = calculateQuadraticEquation(paramA, paramB, paramC, status);
    if (status == 1) {
        std::cout << "Roots of the equation "
            << "x1 = " << root.root1
            << ", x2 = " << root.root2 << std::endl;
    }
    else if (status == 0) {
        std::cout << "Roots of the equation x1 = x2 = "
            << root.root1 << std::endl;
    }
    else {
        std::cout << "There are no roots of the equation " << std::endl;
    }
}

Root calculateQuadraticEquation(const double paramA, const double paramB,
                                const double paramC, int& status) {
    Root root;

    double discriminant = std::pow(paramB, 2) - 4 * paramA * paramC;

    if (discriminant < 0) {
        status = -1;
    } else {
        root.root1 = (-paramB + std::sqrt(discriminant)) / (2 * paramA);

        if (discriminant > 0) {
            root.root2 = (-paramB - std::sqrt(discriminant)) / (2 * paramA);
            status = 1;
        }
        else {
            status = 0;
        }
    }

    return root;
}