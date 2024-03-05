#pragma once
#include <string>
#include <sstream>

class Human {
 public:
	Human(std::string, std::string, std::string);
	virtual std::string getFullName();
	virtual float getInfo();

 private:
	std::string name;
	std::string lastName;
	std::string secondName;
};

