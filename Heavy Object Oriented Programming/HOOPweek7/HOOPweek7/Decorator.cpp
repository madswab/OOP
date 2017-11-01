#include "Decorator.h"

#include "Shaman.h"
#include "Soldier.h"
#include "Farmer.h"
#include "Elves.h"
#include "Orcs.h"

Decorator::Decorator(Character * Chara) {
	deCharacter = Chara;
}

void Decorator::render() {
	deCharacter->render();
}
