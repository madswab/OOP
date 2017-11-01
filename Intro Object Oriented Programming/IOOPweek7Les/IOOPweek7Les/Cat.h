#pragma once
#include "Animal.h"
#include <string>
class Cat : public Animal
{
public:

	Cat(const std::string name);
	void MakeNoise();
};

