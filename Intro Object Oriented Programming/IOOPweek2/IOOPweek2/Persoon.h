using namespace std;
#pragma once
#include <iostream>

class Persoon 
{
public:
	int leeftijd;
	string naam;

	int getAge();
	Persoon();
	~Persoon();
};
