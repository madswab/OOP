#pragma once
#include "Characters.h"


class Decorator : public Characters
{
	Characters* Character;
public:
	Decorator(Characters* Chara);

	virtual void render();

};

