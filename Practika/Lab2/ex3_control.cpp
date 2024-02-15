#include <iostream>

int main() {
    constexpr double fCoins[7] = { 0.05, 0.1, 0.5, 1, 2, 5, 10 };
    double sum;
    double value;
    int coinCount;

    std::cout << "Enter sum : ";
    std::cin >> sum;

    while (sum > 0) {
        value = 0;
        for (auto item : fCoins) {
            if (item > value && item <= sum) {
                value = item;
            }
        }

        coinCount = sum / value;
        std::cout << "Coins in " << value
                  << " rub - " << coinCount << "things " << std::endl;
        sum -= coinCount * value;
    }
}