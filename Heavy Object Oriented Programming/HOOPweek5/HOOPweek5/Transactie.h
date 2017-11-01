#pragma once
#include<iostream>
#include <string>

class Transactie
{
public:

	Transactie(int afBij, std::string datum);

	int afBij;
	std::string datum;

	//bij/afschrijvingen, hoeveelheid, datum.
	// +/- operators bij/afschrijvingen
};

