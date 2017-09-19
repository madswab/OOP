#pragma once
#include "Persoon.h"
class Student : public Persoon
{
public:
	//int leeftijd = 20;
	//string naam = "Ben";
	int geld;

	Student(string naam, int leeftijd, int geld);


	Student();
	~Student();

};
