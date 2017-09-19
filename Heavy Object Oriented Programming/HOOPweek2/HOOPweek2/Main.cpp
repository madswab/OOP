using namespace std;
#pragma once
#include <iostream>
#include <string>
#include "Docent.h"
#include "Student.h"
#include "Module.h"

int main() {
	/*
	Module mod = Module( 10, "d");
	std::cout <<  mod.a_module << std::endl;
	vector<string> *modules = new vector<string>;
	modules->push_back("d" + std::to_string(1));
	std::cout <<  modules->front() << std::endl;
	delete modules;

	Module* mod[3] = { new Module("vak1",1),new Module("vak2",1),new Module("vak3",1) };
	Docent* doc[3] = { new Docent("z"),new Docent("x"),new Docent("c") };
	Student* stu[10] = { new Student("q"),new Student("w"),new Student("e"),new Student("r"),new Student("t"),new Student("y"),new Student("u"),new Student("i"),new Student("o"),new Student("p") };

	std::cout <<  mod[0]->naam << "	" << mod[0]->ec << std::endl;

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Vak: " << mod[i]->naam << ", Naam: " << mod[i]->ec << endl;
	}
	

	delete[] &mod;
	delete[] &doc;
	delete[] &stu;
*/

	vector<Module>* mod = new vector<Module>;
	mod->push_back(Module("vak1", 1));
	mod->push_back(Module("vak2", 2));
	mod->push_back(Module("vak3", 3));

	for (int i = 0; i < mod->size(); i++){
		cout << "Vak: " << mod->at(i).naam << ", Ec: " << mod->at(i).ec << endl;
	}
	cout << " " << endl;

	vector<Docent>* doc = new vector<Docent>;
	doc->push_back(Docent("Hek"));
	doc->push_back(Docent("Ben"));
	doc->push_back(Docent("Jan"));

	for (int i = 0; i < doc->size(); i++){
		cout << "Docent: " << doc->at(i).naam << endl;
	}
	cout << " " << endl;

	vector<Student>* stu = new vector<Student>;
	for (int i = 0; i < 10; i++){
		stu->push_back(Student("student" + to_string(i)));
		cout << stu->at(i).naam << endl;
	}
	cout << " " << endl;

	//--------------------------------------------------------------------------------------

	for (int i = 0; i < mod->size(); i++)
	{
		mod->at(i).docNaam = &doc->at(i);
		cout << "Docent: " << mod->at(i).docNaam->naam << "	Geeft vak: "<< mod->at(i).naam << "	   voor " << mod->at(i).ec << " punten." << endl;
		//cout << "Docent: " << doc->at(i).naam << "	Geeft vak: "<< mod->at(i).naam << "	   voor " << mod->at(i).ec << " punten." << endl;
	}
	cout << " " << endl;

	/*for (int i = 1; i < stu->size() + 1; i++)
	{
		if (i % mod->size() == 1){
			cout << "Vak: " << mod->at(0).naam<< " wordt gevold door: " <<  stu->at(i-1).naam << endl;
		}
		if (i % mod->size() == 2){
			cout << "Vak: " << mod->at(1).naam << " wordt gevold door: " << stu->at(i-1).naam << endl;
		}
		if (i % mod->size() == 0){
			cout << "Vak: " << mod->at(2).naam << " wordt gevold door: " << stu->at(i-1).naam << endl;
		}
	}*/

	for (int i = 0; i < 10; i++){	
		if (i < 4){
			stu->at(i).modForEc.push_back(&mod->at(0));
			stu->at(i).modForEc.push_back(&mod->at(1));
		}
		if (i > 3 && i < 7){
			stu->at(i).modForEc.push_back(&mod->at(1));
			stu->at(i).modForEc.push_back(&mod->at(2));
		}
		if (i > 6){
			stu->at(i).modForEc.push_back(&mod->at(2));
			stu->at(i).modForEc.push_back(&mod->at(0));
		}
		stu->at(i).bereken();
		cout << stu->at(i).naam << " " << stu->at(i).ecTotaal << " " << stu->at(i).modForEc.at(0)->naam << " " << stu->at(i).modForEc.at(1)->naam << endl;
	}
	cout << " " << endl;

	//----------------------------------------------------------------------------------
	
	mod->at(0).ec = 5;

	for (int i = 0; i < 10; i++)
	{ 
		stu->at(i).bereken();
		cout << stu->at(i).naam << " " << stu->at(i).ecTotaal << " " << stu->at(i).modForEc.at(0)->naam << " " << stu->at(i).modForEc.at(1)->naam << endl;
	}
	cout << " " << endl;

	//----------------------------------------------------------------------------------

	stu->erase(stu->begin() + 5);

	for (int i = 0; i < 9; i++)
	{
		stu->at(i).bereken();
		cout << stu->at(i).naam << " " << stu->at(i).ecTotaal << " " << stu->at(i).modForEc.at(0)->naam << " " << stu->at(i).modForEc.at(1)->naam << endl;
	}
	
	//----------------------------------------------------------------------------------

	delete mod;
	delete doc;
	delete stu;

	char key;
	cin >> key;

	return 0;
} 



