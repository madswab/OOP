#pragma once
#include <iostream>
#include "Docent.h"
#include "Student.h"

using namespace std;


int main() {
	std::cout << "Hello, World!" << std::endl;

	Docent docent = Docent("b", 1, 100);
	Student student = Student("a", 2, 0);

	std::cout << "\n" << std::endl;

	std::cout << "Naam" << " " << "Leeftijd" << " " << "Geld" << "	" << "GrijzeHaren" << std::endl;
	std::cout << docent.getName().c_str() << "	" << docent.getAge() << "		" << docent.grijzeHaren << std::endl;
	std::cout << student.getName().c_str() << "	" << student.getAge() << "	" << student.geld << std::endl;


	char key;
	std::cin >> key;

	return 0;
}

