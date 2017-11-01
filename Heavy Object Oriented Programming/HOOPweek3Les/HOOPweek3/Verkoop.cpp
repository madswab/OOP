#include "Verkoop.h"

void Verkoop::verwerkBTW(BTWBerekening* berekening) {
	double prijsItem1 = 25.50;
	double prijsItem2 = 13.75;
	double btw1 = berekening->geefBTW(BTWBerekening::ITEMSOORT_BOEKEN, prijsItem1);
	double btw2 = berekening->geefBTW(BTWBerekening::ITEMSOORT_VOEDSEL, prijsItem2);
	double totaalBTW = btw1 + btw2;
}

Verkoop::Verkoop()
{
}


Verkoop::~Verkoop()
{
}
