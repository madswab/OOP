#pragma once
#include "Vervoer.h"

class Berekening : public Vervoer
{
public:

	Vervoer* hetVervoer;
	Berekening(Vervoer* v);
	virtual void bereken();
};

