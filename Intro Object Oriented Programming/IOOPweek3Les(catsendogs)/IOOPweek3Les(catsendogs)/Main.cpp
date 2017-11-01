#pragma once
#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "AnimalDetector.h"

using namespace std;

void saySomething(Animal& animal) {
	animal.makeNoise();
}


int main() {

	Animal animal1 = Animal(); 
	Cat animal2 = Cat();
	Dog animal3 = Dog();
 
//	animal1.makeNoise();
//	animal2.makeNoise();
//	animal3.makeNoise();

	saySomething(animal1);
	saySomething(animal2);
	saySomething(animal3);

	std::cout << "" << std::endl;

	AnimalDetector detector = AnimalDetector();
	detector.detect(animal1);
	detector.detect(animal2);
	detector.detect(animal3);



	char c;
	cin >> c;

	return 0;
}