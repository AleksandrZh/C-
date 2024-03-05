#include <iostream>
#include <vector>

template<class T>
void print(const T&, std::string);

int main() {
    std::vector<int> data = { 1, 2, 3 };
    print(data, ", ");
}

template<class T>
void print(const T &data, std::string delimiter) {
	for (const auto &item : data) {
		if(item != *data.begin()) {
			std::cout << delimiter;
		}
		std::cout << item;
	}
	std::cout << std::endl;
}