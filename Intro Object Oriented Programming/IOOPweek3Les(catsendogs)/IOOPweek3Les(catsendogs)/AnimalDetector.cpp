#include "AnimalDetector.h"


void AnimalDetector::detect(Animal A)
{
	std::cout << "some sort of animal" << std::endl;
}

void AnimalDetector::detect(Cat c)
{
	std::cout << "its fluffy" << std::endl;

}

void AnimalDetector::detect(Dog d)
{
	std::cout << "it's wagging" << std::endl;

}

AnimalDetector::AnimalDetector()
{
}


AnimalDetector::~AnimalDetector()
{
}
