#include "Soldier.h"


Soldier::Soldier(Characters* chara) : Decorator(chara) {

}

void Soldier::render()
{
	Decorator::render();
	std::cout << "- Soldier ";
}

