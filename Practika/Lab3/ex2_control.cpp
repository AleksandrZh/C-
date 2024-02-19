#include <iostream>
#include<cmath>

double getCubeRoot(double);
double getCubeRoot(double, double);

int main() {
    constexpr double fGap = 1e-10;
    double value;

    std::cout << "cube root of ";
    std::cin >> value;
    std::cout << "standard function:  " << getCubeRoot(value) << std::endl;
    std::cout << "iteration formula :  " << getCubeRoot(value, fGap) << std::endl;
}

double getCubeRoot(double value) {
    return std::pow(value, 1.0 / 3);
}

double getCubeRoot(double value, double gap) {
    double res1;
    double res2 = value;

    do{
        res1 = res2;
        res2 = (value / (res1 * res1) + 2 * res1) / 3;
    } while ((res1 - res2) > gap);

    return res2;
}