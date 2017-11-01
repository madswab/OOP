#pragma once
#include "Berekening.h"

class Toeslag : public Berekening
{
public:
	Toeslag(Vervoer* v);

	void bereken();

	int kostenToeslag = 3;
};

