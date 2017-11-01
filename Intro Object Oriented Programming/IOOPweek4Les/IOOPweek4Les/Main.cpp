#include <iostream>
#include "Broodmandje.h"

using namespace std;

void geefMandjeDoor(Broodmandje* mandje) {
	cout << "Mandje gekregen" << endl;
	mandje->toon();

	mandje->voegToe("croissant");
	mandje->toon();
}


int main() {

	Broodmandje* mandje = new Broodmandje();
	mandje->toon();
	mandje->voegToe("ciabatta");
	mandje->toon();

	geefMandjeDoor(mandje);
	mandje->toon();

	char c;
	cin >> c;

	delete mandje; 
	return 0;
}  