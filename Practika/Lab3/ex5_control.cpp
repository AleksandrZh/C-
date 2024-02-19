#include <iostream>
#include <string> 

std::string convertToBinary(int);

int main() {
    int num;
    std::cout << "Enter dec numb: ";
    std::cin >> num;
    std::cout << "Binary form of number: " << convertToBinary(num) << std::endl;
}

std::string convertToBinary(int num) {
    if (num < 2) {
        return std::to_string(num);
    }
    else {
        return convertToBinary(num / 2) + std::to_string(num % 2);
    }
}