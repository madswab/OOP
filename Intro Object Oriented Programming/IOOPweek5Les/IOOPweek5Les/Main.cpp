#include <iostream>
#include "Broodmandje.h"
 
int main() {

	Broodmandje mandje1 = Broodmandje();
	mandje1.toon();

	mandje1.voegToe("hallobroodje");
	std::cout << "-- mandje1" << std::endl;
	mandje1.toon();

	Broodmandje mandje2 = Broodmandje();
	mandje2 = mandje1;
	std::cout << "-- mandje2" << std::endl;
	mandje2.toon();

	mandje1.voegToe("cru");
	std::cout << "-- mandje1" << std::endl;
	mandje1.toon();

	std::cout << "-- mandje2" << std::endl;
	mandje2.toon();

	/*
		Broodmandje mandje1 = Broodmandje();
	mandje1.toon();

	mandje1.voegToe("hallobroodje");
	std::cout << "-- mandje1" << std::endl;
	mandje1.toon();

	Broodmandje mandje2 = mandje1;
	std::cout << "-- mandje2" << std::endl;
	mandje2.toon();

	mandje1.voegToe("cru");
	std::cout << "-- mandje1" << std::endl;
	mandje1.toon();

	std::cout << "-- mandje2" << std::endl;
	mandje2.toon();

	*/

	/*
	Broodmandje* mandje = new Broodmandje();
	mandje->toon();

	delete mandje;
	*/


	char c;
	std::cin >> c;

	return 0;
}