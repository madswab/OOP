#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Boek.h"

class Bibliotheek
{
public:


	Bibliotheek(std::string naam);
	Bibliotheek(const Bibliotheek& bibliotheek);
	virtual ~Bibliotheek();
	void toevoegen(Boek* b);
	void toon();

private:
	std::string naam;
	std::vector<Boek*> boekkenInBib;
};

