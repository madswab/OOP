#pragma once
#include "Decorator.h"

class Soldier : public Decorator
{
public:
	Soldier(Character* chara);
	void render();
};

