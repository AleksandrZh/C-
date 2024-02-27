#include <iostream>
#include "time.h"

Time::Time() : Time::Time(0, 0, 0)
{}

Time::Time(int hrs, int min, int sec) {
	Time::seconds = sec % 60;
	Time::minutes = (min + sec / 60) % 60;
	Time::hours = (hrs + (min + sec / 60) / 60) % 24;
}

void Time::showTime() {
	std::cout << Time::converter(Time::hours) << ":"
			  << Time::converter(Time::minutes) << ":"
			  << Time::converter(Time::seconds) << std::endl;
}

std::string Time::converter (int &value) {
	return value < 10 ? ("0" + std::to_string(value)) : std::to_string(value);
}

Time Time::addTime(Time &secondTime) {
	Time time(Time::hours + secondTime.hours,
			  Time::minutes + secondTime.minutes,
			  Time::seconds + secondTime.seconds);
	return time;
}