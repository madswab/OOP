#pragma once


class BTWBerekening
{
public:
	static const int ITEMSOORT_BOEKEN = 1;
	static const int ITEMSOORT_VOEDSEL = 2;
	static const int ITEMSOORT_KLEDING = 3;

	BTWBerekening();
	virtual double geefBTW(int type, double prijs) =0;


};

