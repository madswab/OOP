#include "Toeslag.h"



Toeslag::Toeslag(Vervoer * v) : Berekening(v)
{
}

void Toeslag::bereken(){
	Berekening::bereken();
	std::cout << "Extra toeslag: " << kostenToeslag << " euro/km" << std::endl;
}
