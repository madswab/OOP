#include "Student.h"



Student::Student(string n)
{
	naam = n;

}


Student::~Student()
{
}

void Student::bereken() {
	int test = 0; 
	for (int i = 0; i < modForEc.size(); i++)
	{
		test += modForEc.at(i)->ec;
	}
	ecTotaal = test;
}
