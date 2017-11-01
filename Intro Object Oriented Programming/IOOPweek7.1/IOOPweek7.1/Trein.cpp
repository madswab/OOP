#include "Trein.h"



Trein::Trein(std::string n)
{
	this->name = n;
}

void Trein::Bereken(){
	float opbrengst = this->capaciteitTrein * this->prijsTrein;
	std::cout << "------" << std::endl;
	std::cout << name << "\nCapaciteit: " << this->capaciteitTrein << "\nKosten kaartje: €" << this->prijsTrein << "\nOpbrengst: €" << opbrengst << std::endl;
}

