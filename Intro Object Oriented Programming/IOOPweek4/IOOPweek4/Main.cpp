#include <iostream>
#include "Bibliotheek.h"

void LeenBoekUit(Bibliotheek* boek) {
	std::cout << "Boek uitgeleend" << std::endl;
	boek->leenBoek();

}


int main() {

	Bibliotheek* bib = new Bibliotheek();
	bib->toon();
	bib->voegToe("boekNaam1");
	bib->toon();

	LeenBoekUit(bib);
	bib->voegToe("boekNaam2");
	bib->toon();
	LeenBoekUit(bib);

	char c;
	std::cin >> c;

	delete bib;
	return 0;
}