#pragma once
#include "Berekening.h"

class PrijsPerKMTrein : public Berekening
{
public:
	int kosten = 2;
	PrijsPerKMTrein(Vervoer* v);

	void bereken();

};

