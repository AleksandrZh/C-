#include <iostream>
#include <windows.h>
#include "time.h"

int main() {

	try {
		Time time1(22, 50, 15);
		Time time2(23, 40, 35);
		Time time3;

		std::cout << "First time: ";
		time1.showTime();
		std::cout << "Second time: ";
		time2.showTime();

		time3 = time2.addTime(time1);
		std::cout << "Sum: ";
		time3.showTime();
	}
	catch (Time::TimeError& err) {
		std::cout << "ERROR: ";
		err.printMessage();
	}
}