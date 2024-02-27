#include <iostream>
#include <tuple>
#include <cmath>

using Tuple = std::tuple<double, double, int>;

Tuple calculateQuadraticEquation(const double, const double, const double);

int main() {

    double paramA, paramB, paramC;

    std::cout << "Enter the coefficients of a quadratic equation of the form "
        << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "Coef a: ";
    std::cin >> paramA;
    std::cout << "Coef b: ";
    std::cin >> paramB;
    std::cout << "Coef c: ";
    std::cin >> paramC;

    Tuple root = calculateQuadraticEquation(paramA, paramB, paramC);
    if (std::get<2>(root) == 2) {
        std::cout << "Roots of the equation "
            << "x1 = " << std::get<0>(root)
            << ", x2 = " << std::get<1>(root) << std::endl;
    }
    else if (std::get<0>(root) == 1) {
        std::cout << "Roots of the equation x1 = x2 = "
            << std::get<1>(root) << std::endl;
    }
    else {
        std::cout << "There are no roots of the equation " << std::endl;
    }
}

Tuple calculateQuadraticEquation(const double paramA, const double paramB,
                                 const double paramC) {
    double root1;
    double root2;
    int status;

    double discriminant = std::pow(paramB, 2) - 4 * paramA * paramC;

    if (discriminant < 0) {
        status = 0;
    }
    else {
        root1 = (-paramB + std::sqrt(discriminant)) / (2 * paramA);

        if (discriminant > 0) {
            root2 = (-paramB - std::sqrt(discriminant)) / (2 * paramA);
            status = 2;
        }
        else {
            root2 = root1;
            status = 1;
        }
    }

    return std::make_tuple(root1, root2, status);
}