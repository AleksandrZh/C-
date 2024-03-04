#pragma once
#include <iostream>
#include<string>

class Time {
 public:
    class TimeError {
     public:
        TimeError(std::string);
        void printMessage();
     private:
        std::string message;
    };
    Time();
    Time(int, int, int);
    Time addTime(Time&);
    void showTime();
 private:
    int hours;
    int minutes;
    int seconds;
    std::string converter(int&);
};