#pragma once
#include <vector>
#include<iostream>
#include "Transactie.h"

class Bankrekening
{
public:

	Bankrekening(std::string name, int saldo = 0 /*,std::string historie = 0*/);
	Bankrekening& operator+(const Transactie transactie);
	Bankrekening& operator-(Transactie transactie);
	friend std::ostream& operator<<(std::ostream& stream, const Bankrekening bankrekening);

	std::string name;
	int saldototaal = 0;
	std::vector<Transactie> transacties;// = new std::vector <Transactie>;


	//saldo en transactie historie.
	// << operator.

};

