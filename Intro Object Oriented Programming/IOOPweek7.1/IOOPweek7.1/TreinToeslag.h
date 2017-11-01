#pragma once
#include "Toeslag.h"
#include <string>
#include<iostream>

class TreinToeslag: public Toeslag
{
public:
	TreinToeslag(std::string n);
	void Bereken();
	void ToeslagBerekenen();

	double prijsMetToeslag;
	std::string name;
};

