using namespace std;
#pragma once
#include <iostream>
#include <string> 
#include <vector>
#include "Docent.h"

class Module
{
public:
	 
	string naam;
	int ec;
	//Module *a_module = new Module[3];
	//vector<Module()> *modules = new vector<Module()>;

	Module(string n, int e);
	Docent* docNaam;

	Module();
	~Module();
};

