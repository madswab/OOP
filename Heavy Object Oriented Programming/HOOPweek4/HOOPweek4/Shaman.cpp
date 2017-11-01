#include "Shaman.h"



Shaman::Shaman(Characters* chara) : Decorator (chara){

}

void Shaman::render()
{
	Decorator::render();
	std::cout << "- Shaman ";
}


