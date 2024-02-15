//chek_snils
#include <iostream>

int main() {
    int num;
    int sum = 0;
    int inputCheckNum, checkNum;
    int remainder = 0;

    std::cout << "Enter SNILS: ";
    for (int pos = 9; pos >= 0; pos--) {
        std::cin >> num;

        if (pos != 0) {
            sum += num * pos;
        }
        else {
            inputCheckNum = num;
        }
    }

    remainder = sum % 101;

    if (sum < 100) {
        checkNum = inputCheckNum;
    }else if (sum == 100 || sum == 101) {
        checkNum = 0;
    }
    else if (remainder < 100) {
        checkNum = remainder;
    }
    else {
        checkNum = 0;
    }

    std::cout << "Result Check ";
    if (checkNum == inputCheckNum) {
        std::cout << true << std::endl;
    }
    else {
        std::cout << false << std::endl;
    }
    return 0;
}