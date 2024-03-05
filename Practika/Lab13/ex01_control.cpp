#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "teacher.h"
#include "human.h"


int main() {

    std::vector<int> scores;
    unsigned int teacherWorkTime = 40;

    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    Human *human = new Student("Petrov", "Ivan", "Alekseevich", scores);
    std::cout << human->getFullName() << std::endl;
    std::cout << "number of hours: " << human->getInfo() << std::endl;
    
    human = new Teacher("Sergeev", "Dmitriy", "Sergeevich", teacherWorkTime);
    std::cout << human->getFullName() << std::endl;
    std::cout << "GPA : " << human->getInfo() << std::endl;

    delete human;

    return 0;
}