#include <iostream>

int sumSeries(int);

int main() {
    

    int count;

    std::cout << "Enter the number of terms in the series: ";
    std::cin >> count;
    std::cout << "Sum series: " << sumSeries(count) << std::endl;
}

int sumSeries(int count) {
    if (count == 0) {
        return 0;
    }
    else {
        return 5 * count + sumSeries(count - 1);
    }
}