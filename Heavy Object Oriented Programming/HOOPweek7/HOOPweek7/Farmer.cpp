#include "Farmer.h"

Farmer::Farmer(Character* chara) : Decorator(chara) {

}

void Farmer::render()
{
	Decorator::render();
	std::cout << "- Farmer " << std::endl;
}

