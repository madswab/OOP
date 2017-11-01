#pragma once
#include "Boek.h"
#include<iostream>

class Bibliotheek
{
public:

	Bibliotheek();
	void toon();
	void leenBoek();
	void voegToe(std::string type);
private:
	Boek* boek = new Boek();

};

