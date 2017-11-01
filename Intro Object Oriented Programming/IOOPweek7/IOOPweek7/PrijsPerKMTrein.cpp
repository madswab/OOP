#include "PrijsPerKMTrein.h"

PrijsPerKMTrein::PrijsPerKMTrein(Vervoer * v) : Berekening(v){
}

void PrijsPerKMTrein::bereken(){
	Berekening::bereken();
	std::cout << "kosten zijn: " << kosten << " euro/km" << std::endl;
}
