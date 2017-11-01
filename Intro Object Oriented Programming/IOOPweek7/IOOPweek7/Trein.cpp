#include "Trein.h"

Trein::Trein(std::string n){
	name = n;
}

void Trein::bereken(){
	std::cout << name << "\nType: Trein" << std::endl;
}
