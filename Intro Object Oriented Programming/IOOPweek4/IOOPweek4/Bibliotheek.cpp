#include "Bibliotheek.h"

Bibliotheek::Bibliotheek()
{
}

void Bibliotheek::toon()
{
	std::cout << "Bibliotheek -" << boek->_type << std::endl;
}

void Bibliotheek::leenBoek()
{
	std::cout << "Geen Boeken in de bibiotheek" << std::endl;
	delete boek;
}

void Bibliotheek::voegToe(std::string type)
{
	boek = new Boek(type);
}
