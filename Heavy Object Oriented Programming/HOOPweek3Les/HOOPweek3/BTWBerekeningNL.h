#pragma once
#import "BTWBerekening.h"

class BTWBerekeningNL:public BTWBerekening
{
public:
	double geefBTW(int type, double prijs);

	BTWBerekeningNL();
	~BTWBerekeningNL();
};

