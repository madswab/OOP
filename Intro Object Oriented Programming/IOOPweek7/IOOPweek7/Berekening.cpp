#include "Berekening.h"



Berekening::Berekening(Vervoer* v){
	hetVervoer = v;
}

void Berekening::bereken(){
	hetVervoer->bereken();
}

