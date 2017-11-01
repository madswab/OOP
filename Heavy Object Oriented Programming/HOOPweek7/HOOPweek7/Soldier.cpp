#include "Soldier.h"


Soldier::Soldier(Character* chara) : Decorator(chara) {

}

void Soldier::render()
{
	Decorator::render();
	std::cout << "- Soldier " << std::endl;
}

