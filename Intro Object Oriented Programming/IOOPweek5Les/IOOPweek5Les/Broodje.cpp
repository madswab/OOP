#include "Broodje.h"



Broodje::Broodje(std::string type)
{
	_type = type;

}

Broodje::Broodje()
{
	std::cout << "Brood: ctor" << std::endl;

}

Broodje::~Broodje()
{
	std::cout << "Broodje: dtor " << std::endl;
}

