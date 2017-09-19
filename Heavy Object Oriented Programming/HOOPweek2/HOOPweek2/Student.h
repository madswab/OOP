using namespace std;
#pragma once
#include <iostream>
#include <string> 
#include <vector>
#include "Module.h"
class Student 
{
public:
	string naam;
	int ecTotaal;
	vector<Module*> modForEc;

	void bereken();
	Student(string n);
	~Student();
};

