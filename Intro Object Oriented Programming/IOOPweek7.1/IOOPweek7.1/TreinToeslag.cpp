#include "TreinToeslag.h"



TreinToeslag::TreinToeslag(std::string n)
{
	this->name = n;

}

void TreinToeslag::ToeslagBerekenen(){
	prijsMetToeslag = this->prijsTrein + extraKostenTrein;
}

void TreinToeslag::Bereken(){
	double opbrengst = this->capaciteitTrein * prijsMetToeslag;
	std::cout << "------" << std::endl;
	std::cout << name << "\nCapaciteit: " << this->capaciteitTrein << "\nKosten kaartje: €" << this->prijsTrein << "\nToeslag: €" << this->extraKostenTrein << "\nKaartje met toeslag: €"<< this->prijsMetToeslag <<"\nOpbrengst: €" << opbrengst << std::endl;
}


