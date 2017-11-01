#include "Passasiers.h"


Passasiers::Passasiers(Vervoer * v) : Berekening(v){
	
}

void Passasiers::bereken(){
	Berekening::bereken();
	std::cout << "Totaal aantal passasiers: " << maxPassasiers << std::endl;
}
