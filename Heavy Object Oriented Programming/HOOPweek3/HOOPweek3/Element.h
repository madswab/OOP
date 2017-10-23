#pragma once
class Element
{
public:

	// status
	bool alive = true;
	int levendeBuren = 0;
	Element* links; 
	Element* linksBoven;
	Element* linksOnder;
	Element* boven;
	Element* onder;
	Element* rechts;
	Element* rechtsBoven;
	Element* rechtsOnder;

	int Population(int levendeBuren);
	void liveOrDie();

	Element();
	~Element();
};

