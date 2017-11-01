#include "Broodmandje.h"



Broodmandje::Broodmandje()
{
	std::cout << "Broodmandje: constructor " << std::endl;

}

void Broodmandje::toon()
{
	std::cout << "Brood in mandje " << broodje->_type <<std::endl;
}

void Broodmandje::voegToe(std::string type)
{
	delete broodje;
	broodje = new Broodje(type);

}

Broodmandje::~Broodmandje()
{
	std::cout << "Broodmandje: dtor " << std::endl;
	delete broodje;
}

Broodmandje::Broodmandje(const Broodmandje & anderMandje)
{
	broodje = new Broodje();
	broodje->_type = anderMandje.broodje->_type; 
}

Broodmandje & Broodmandje::operator=(const Broodmandje & anderMandje)
{
	if (this != &anderMandje)
	{
		delete broodje;
		broodje = new Broodje();
		broodje->_type = anderMandje.broodje->_type;
	}
	return *this;
}
