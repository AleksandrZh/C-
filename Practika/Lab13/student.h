#pragma once
#include "human.h"
#include <string>
#include <vector>

class Student : public Human {
 public:
	 Student(std::string, std::string,
			 std::string, std::vector<int>);
	float getInfo();
 private:
	std::vector<int> scores;
	float getAverageScore();
};