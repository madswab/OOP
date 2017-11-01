#include "BTWBerekeningNL.h"

double BTWBerekening::geefBTW(int type, double prijs) {
	if (type = BTWBerekening::ITEMSOORT_VOEDSEL)
	{
		return prijs * 1.06;
	}
	else if (type = BTWBerekening:: ITEMSOORT_BOEKEN) {
		return prijs * 1.21;
	}
	else
	{
		return prijs * 1.21;
	}
}

double BTWBerekeningNL::geefBTW(int type, double prijs)
{
	return 0.0;
}

BTWBerekeningNL::BTWBerekeningNL()
{
}


BTWBerekeningNL::~BTWBerekeningNL()
{
}
