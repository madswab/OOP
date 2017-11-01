#pragma once
#include <iostream>
#include <string>

class Character
{
public:
	static const int totaal = 6;
	static Character* makeCharacter(int type);
	virtual void render() = 0;

};

