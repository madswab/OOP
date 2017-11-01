#pragma once
#include "Broodje.h"
#include<iostream>;

class Broodmandje
{
public:
	Broodmandje();
	void toon();
	void voegToe(std::string type);
	virtual ~Broodmandje();
	Broodmandje(const Broodmandje& anderMandje);
	Broodmandje& operator = (const Broodmandje& anderMandje);

private:
	Broodje* broodje = new Broodje();

};

