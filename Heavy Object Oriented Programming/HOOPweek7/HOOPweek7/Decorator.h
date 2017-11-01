#pragma once
#include "Character.h"

class Decorator : public Character {
public:
	Character* deCharacter = 0;

	Decorator(Character* Chara);

	virtual void render() = 0;

};

