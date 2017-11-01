#pragma once
#include "Vervoer.h"

class Trein : public Vervoer
{
public:
	std::string name;
	Trein(std::string n);
	void bereken();
};

