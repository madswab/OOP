#include "Bankrekening.h"

Bankrekening::Bankrekening(std::string name, int saldo){
	this->name = name;
	this->saldototaal = saldo;
	transacties = std::vector <Transactie>();
}

Bankrekening& Bankrekening::operator+(const Transactie transactie){
	saldototaal += transactie.afBij;
	transacties.push_back(transactie);
	std::cout << "€ " << transactie.afBij << ", " << transactie.datum << std::endl;
	return *this;
}

Bankrekening& Bankrekening::operator-(Transactie transactie) {
	saldototaal -= transactie.afBij;
	transactie.afBij *= -1;
	transacties.push_back(transactie);
	std::cout << "€ " << transactie.afBij << ", " << transactie.datum << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Bankrekening bankrekening){
	float saldo = 0;
	std::cout << "---------" << std::endl;
	stream << "Rekening: " <<bankrekening.name << "\tsaldo: €" << bankrekening.saldototaal << "\n";
	for (int i = 0; i < bankrekening.transacties.size(); i++) {
		saldo += bankrekening.transacties.at(i).afBij;
		stream << "€ " << std::to_string(bankrekening.transacties.at(i).afBij) << ", datum: " << bankrekening.transacties.at(i).datum << ", totaal saldo: €" << std::to_string(saldo) << "\n";
	}
	return stream;


}


