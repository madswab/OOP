#include "Temp.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>

#include "Characters.h"
#include "Shaman.h"
#include "Soldier.h"
#include "Farmer.h"
#include "Elves.h"
#include "Orcs.h"

using namespace std;


template<typename T> // voor string moet ik naar v[].length kijken.
void sort(T v) {
	float temp = NULL;
	cout << "Not Sorted	" ;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout<<"" << endl;
	for (int i = 0; i < v.size(); i++){
		for (int j = 0; j < v.size(); j++){
			if (v[i]<v[j]){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	cout << "Sorted		" ;
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " "  ;
	}
	cout << "" << endl;

	/*
		for (size_t i = 1; i < sizeof(arr); i++){
		
		int b = 

		while (biggest){

		}

	}
	cout << arr << "" <<;
	*/
}	

int main() {

	vector<float> testFloat = { 10,6,36,2,1,44.2f,13.5f };
	sort(testFloat);
	vector<string> testString = { "test","oke","tryed","and" };
	//sort(testString);
	cout << "" << endl;

	//------------------------------------------------------------
	Temp<int> tempQ;

	tempQ.put(1);
	tempQ.put(2);
	tempQ.put(3);

	while (!tempQ.myQ.empty()){
		tempQ.get();
		tempQ.size();
	}
	cout << "" << endl;

	//--------------------------------------------------------------

	Characters* elve = new Shaman(new Soldier(new Farmer(new Elves)));
	elve->render();
	cout << "" << endl;

	Characters* orcs = new Shaman(new Soldier(new Farmer(new Orcs)));
	orcs->render();
	cout << "" << endl;

	//---------------------------------------------------------------
	char c;
	cin >> c;

	return 0;
}