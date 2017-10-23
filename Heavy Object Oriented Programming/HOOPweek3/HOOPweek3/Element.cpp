#include "Element.h"


int Element::Population(int levend)
{

	if (links != nullptr && links->alive){
		levend += 1;
	}
	if (linksBoven != nullptr && linksBoven->alive) {
		levend += 1;
	}
	if (linksOnder != nullptr && linksOnder->alive) {
		levend += 1;
	}	
	if (boven != nullptr && boven->alive) {
		levend += 1;
	}	
	if (onder != nullptr && onder->alive) {
		levend += 1;
	}	
	if (rechts != nullptr && rechts->alive) {
		levend += 1;
	}	
	if (rechtsBoven != nullptr && rechtsBoven->alive) {
		levend += 1;
	}
	if (rechtsOnder != nullptr && rechtsOnder->alive) {
		levend += 1;
	}
	levendeBuren = levend;
	return levend;
}

void Element::liveOrDie()
{
	if (levendeBuren == 3 || (alive && levendeBuren == 2)){
		alive = true;
	}
	else {
		alive = false;
	}

}

Element::Element()
{
}


Element::~Element()
{
}
