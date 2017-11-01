#pragma once
#include "Berekening.h"

class Passasiers : public Berekening
{
public:
	Passasiers(Vervoer* v);

	void bereken();

	int maxPassasiers = 500;
};

