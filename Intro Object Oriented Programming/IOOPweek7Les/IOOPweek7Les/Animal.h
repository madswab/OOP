#pragma once
#include <string>
class Animal
{
public:
	std::string name;
	Animal(const std::string name);
	virtual void MakeNoise() = 0;
};

