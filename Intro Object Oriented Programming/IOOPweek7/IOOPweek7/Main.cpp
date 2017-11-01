#include <iostream>
#include <vector>

#include "Vervoer.h"
#include "Berekening.h"
#include "PrijsPerKMTrein.h"
#include "Trein.h"
#include "Toeslag.h"
#include "Passasiers.h"

void reken(std::vector<Vervoer*> vervoermiddelen) {
	for (auto& vervoer : vervoermiddelen) {
		std::cout << "---" << std::endl;
		vervoer->bereken();
	}
	std::cout << "---" << std::endl;
}

int main() {
	std::vector<Vervoer*> vervoermiddelen;

	Vervoer* trein = new Passasiers(new PrijsPerKMTrein(new Trein("Trein")));
	vervoermiddelen.push_back(trein);

	Vervoer* sneltrein = new Passasiers(new Toeslag(new PrijsPerKMTrein(new Trein("Sneltrein"))));
	vervoermiddelen.push_back(sneltrein);

	reken(vervoermiddelen);

	//aantal passasiers 
	//vaste prijs per km per type
	//extra toelsag mogelijk
	//ui


	char c;
	std::cin >> c;

	return 0;
}