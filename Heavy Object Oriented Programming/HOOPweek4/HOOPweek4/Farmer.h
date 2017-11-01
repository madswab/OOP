#pragma once
#include "Decorator.h"

class Farmer : public Decorator
{
public:
	Farmer(Characters* chara);
	void render();
};

