#include "Shaman.h"



Shaman::Shaman(Character* chara) : Decorator(chara) {

}

void Shaman::render()
{
	Decorator::render();
	std::cout << "- Shaman " << std::endl;
}


