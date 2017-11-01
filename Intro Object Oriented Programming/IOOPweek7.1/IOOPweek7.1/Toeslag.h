#pragma once
#include "Berekening.h"

class Toeslag : public Berekening
{
public:

	virtual void ToeslagBerekenen() = 0;

	float extraKostenTrein = .5;
};

