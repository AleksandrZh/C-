#include "side_error.h"

SideError::SideError(const int side){
	SideError::message = "side with long " + std::to_string(side) + " has an invalid length";
}

void SideError::printMessage() const { 
	std::cout << SideError::message << std::endl;
}