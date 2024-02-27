#pragma once
#include <iostream>
#include<string>

class Time {
 public:
    Time();
    Time(int, int, int);
    Time addTime(Time&) ;
    void showTime();
 private:
    int hours;
    int minutes;
    int seconds;
    std::string converter(int&);
};