#include "Animal.h"
#include "Cat.h"

#include <string>

int main() {

	//Animal animal = Animal("Beast");
	//animal.MakeNoise();

	Cat cat = Cat("testcat");
	cat.MakeNoise();

	return 0;
}