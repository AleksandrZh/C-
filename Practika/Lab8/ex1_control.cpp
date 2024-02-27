#include <iostream>
#include "time.h"

int main() {

	const Time time1(2, 70, 65);
	const Time time2(25, 80, 35);
	Time time3;

	std::cout << "First time: ";
	time1.showTime();
	std::cout << "Second time: ";
	time2.showTime();

	time3 = time2.addTime(time1);
	std::cout << "Sum: ";
	time3.showTime();
}