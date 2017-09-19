#pragma once
#include "Persoon.h"
class Docent : public Persoon
{
public:
	//int leeftijd = 40;
	//string naam = "Hen";
	int grijzeHaren;

	Docent(string n, int l, int grijzeHaren);


	Docent();
	~Docent();
};

