#include "Broodmandje.h"
#include "Broodje.h"


Broodmandje::Broodmandje()
{

}

void Broodmandje::toon()
{
	std::cout << "Broodmandje " << broodje->_type << std::endl;
}

void Broodmandje::voegToe(std::string type)
{
	broodje = new Broodje(type);

}




