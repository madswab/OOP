#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	void makeNoise() override;

	Dog();
	~Dog();
};

