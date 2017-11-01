#pragma once
#include "Berekening.h"
#include <string>
#include<iostream>

class Trein : public Berekening
{
public:
	Trein(std::string n);
	void Bereken();

	std::string name;
};

