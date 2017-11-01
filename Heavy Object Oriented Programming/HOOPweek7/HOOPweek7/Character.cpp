#include "Character.h"

#include "Shaman.h"
#include "Soldier.h"
#include "Farmer.h"
#include "Elves.h"
#include "Orcs.h"

Character* Character::makeCharacter(int type) {
	Character* character = NULL;
	if (type == 1) {
		character = new Elves();
	}
	else if (type == 2) {
		character = new Shaman(new Soldier(new Elves()));
	}
	else if (type == 3) {
		character = new Farmer(new Shaman(new Soldier(new Elves())));
	}
	else if (type == 4) {
		character = new Orcs();
	}
	else if (type == 5) {
		character = new Shaman(new Soldier(new Orcs()));
	}
	else if (type == 6) {
		character = new Farmer(new Shaman(new Soldier(new Orcs())));
	}
	return character;
}
