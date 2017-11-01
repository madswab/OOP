#include "Berekening.h"
#include "Toeslag.h"
#include "TreinToeslag.h"
#include "Trein.h"

#include<iostream>
#include<string>

int main() {

	Trein trein1 = Trein("Trein1");
	TreinToeslag trein2 = TreinToeslag("Trein2");

	trein1.Bereken();

	trein2.ToeslagBerekenen();
	trein2.Bereken();
	trein2.capaciteitTrein = 200;
	trein2.Bereken();

	char c;
	std::cin >> c;

	return 0;
}

// Het is nogal onlogisch want volgens mij kan het met 1 abstract class. Ik zie niet zo goed in waar ik die 2e voor moet gebruiken.