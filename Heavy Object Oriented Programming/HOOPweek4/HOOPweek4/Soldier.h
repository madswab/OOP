#pragma once
#include "Decorator.h"

class Soldier : public Decorator
{
public:
	Soldier(Characters* chara);
	void render();
};

