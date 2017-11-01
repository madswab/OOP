#pragma once
#include <string>
#include <iostream>
class Boek
{
public:
	std::string _type = "onbekend";
	
	Boek(std::string type);
	Boek();
	virtual ~Boek();

};

