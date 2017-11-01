#include<iostream>
#include <string>
#include "Transactie.h"
#include "Bankrekening.h"


int main() {

	Bankrekening spaarRekening = Bankrekening("Spaarrekenening");

	/*
	std::cout << spaarRekening.getName() << " - " << spaarRekening.getTotaal() << " euro " << std::endl;

	spaarRekening = spaarRekening + transactie1;
	std::cout << spaarRekening.getName() << " - " << spaarRekening.getTotaal() << " euro - " << transactie1.getDatum() << " datum" << std::endl;

	*/

	spaarRekening = spaarRekening + Transactie(100, "1 mei");
	spaarRekening = spaarRekening + Transactie(200, "2 mei");
	spaarRekening = spaarRekening - Transactie(50, "3 mei");


	std::cout << spaarRekening << std::endl; //geeft saldo en history van transacties.

	char c;
	std::cin >> c;

	return 0;
};