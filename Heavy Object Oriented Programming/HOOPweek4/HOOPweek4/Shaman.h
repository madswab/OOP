#pragma once
#include "Decorator.h"

class Shaman : public Decorator 
{
public:
	Shaman(Characters* chara);
	void render();
};

