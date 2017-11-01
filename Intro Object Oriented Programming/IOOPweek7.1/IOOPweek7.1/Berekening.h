#pragma once
class Berekening
{
public:
	Berekening();
	virtual void Bereken() = 0;

	double prijsTrein = 1.20;
	int capaciteitTrein = 100;
};

