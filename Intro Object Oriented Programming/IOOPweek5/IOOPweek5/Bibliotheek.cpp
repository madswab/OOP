#include "Bibliotheek.h"

Bibliotheek::Bibliotheek(std::string naam){
	this->naam = naam;
}

Bibliotheek::Bibliotheek(const Bibliotheek & bibliotheek){

}

Bibliotheek::~Bibliotheek(){
	std::cout << "dtor"<< naam << std::endl;
	boekkenInBib.clear();
	std::cout << "" << std::endl;

	/*
	std::vector<Boek*>::iterator it = boekkenInBib.begin();
	while (it != boekkenInBib.end()) { // delete boeken ook volledig
		std::cout << (*it)->_type << std::endl;
		delete *it;
		it++;
	}*/
}

void Bibliotheek::toevoegen(Boek * b){
	boekkenInBib.push_back(b);
}

void Bibliotheek::toon(){
	std::cout << "----- In bibiotheek:" << naam << std::endl;
	std::vector<Boek*>::iterator it = boekkenInBib.begin();
	while (it != boekkenInBib.end()) {
		std::cout << (*it)->_type << std::endl;
		it++;
	}
	std::cout << "" << std::endl;
}
