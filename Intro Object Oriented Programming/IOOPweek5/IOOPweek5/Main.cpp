#include "Bibliotheek.h"
#include "Boek.h"


int main() {

	Bibliotheek bib1 = Bibliotheek("bibliotheek1");
	bib1.toon();
	Bibliotheek bib2 = Bibliotheek("bibliotheek2");
	bib2.toon();

	Boek* boe1 = new Boek("boek1");
	bib1.toevoegen(boe1);
	bib1.toon();

	Boek* boe2 = new Boek("boek2");
	bib1.toevoegen(boe2);
	bib1.toon();

	bib1.~Bibliotheek();

	Boek* boe3 = new Boek("boek3");
	bib2.toevoegen(boe1);
	bib2.toevoegen(boe2);
	bib2.toevoegen(boe3);
	bib2.toon();


	char c;
	std::cin >> c;
	
	delete boe1;
	delete boe2;
	delete boe3;
	bib2.~Bibliotheek();

	return 0;
};