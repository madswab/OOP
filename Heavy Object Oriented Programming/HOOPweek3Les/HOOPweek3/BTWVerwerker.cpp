#include "BTWVerwerker.h"
#include "Verkoop.h"
#include "BTWBerekeningNL.h"


void BTWVerwerker::verwerkBerekening() {
	BTWVerwerker* berekening = berekeningVoorland();

	Verkoop* verkoop1 = new Verkoop();
	Verkoop* verkoop2 = new Verkoop();
	Verkoop* verkoop3 = new Verkoop();

	verkoop1->verwerkBTW(berekening);
	verkoop2->verwerkBTW(berekening);
	verkoop3->verwerkBTW(berekening);

}
BTWBerekening* BTWVerwerker::berekeningVoorland() {
	return new BTWBerekeningNL();
}

BTWVerwerker::BTWVerwerker()
{
}

BTWVerwerker::~BTWVerwerker()
{
}
