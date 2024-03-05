#pragma once
#include "human.h"
#include <string>

class Teacher : public Human {

 public:
	 Teacher(std::string, std::string,
			 std::string, unsigned int);
	 float getInfo();
 private:
	unsigned int workTime;
	unsigned int getWorkTime();
};
