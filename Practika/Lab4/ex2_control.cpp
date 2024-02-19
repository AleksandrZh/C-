#include <iostream>

bool input(int&, int&);

int main() {
    int a, b;
    if (!input(a, b))
    {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;23
    return 0;
}

bool input(int &value1, int &value2) {
    std::cout << "Enter two numbers: ";
    std::cin >> value1;
    std::cin >> value2;

    if (value1 > value2) {
        return true;
    } else {
        return false;
    }
}