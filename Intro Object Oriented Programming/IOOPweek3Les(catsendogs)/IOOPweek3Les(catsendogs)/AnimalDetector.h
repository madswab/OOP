#pragma once
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
class AnimalDetector
{
public:

	void detect(Animal A);
	void detect(Cat c);
	void detect(Dog d);

	AnimalDetector();
	~AnimalDetector();
};

