#include "Farmer.h"

Farmer::Farmer(Characters* chara) : Decorator(chara) {

}

void Farmer::render()
{
	Decorator::render();
	std::cout << "- Farmer " ;
}

