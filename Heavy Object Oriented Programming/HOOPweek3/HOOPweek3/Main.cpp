#include <iostream>
#include <string>
#include <vector>
#include "Element.h"
using namespace std;

void clearScreen() {
		if (system("CLS")) system("clear");
}


int main(){
	
	bool start = true;
	int hight = 25;
	int width = 100; 
	vector<Element>* element = new vector <Element>; 
	
	for (size_t i = 0; i < hight * width; i++){
		element->push_back(Element());
	}

	//random start
	if (start){		
		for (int i = 0; i < hight * width; i++){
			element->at(i).alive = (rand() % 2);
		}		
		start = false;
	}

/*
	for (int a = 0; a < hight; a++){
		string tempHeight = "";
		for (int b = 0; b < width; b++){
			tempHeight += char(219);
		}
		cout << tempHeight << endl;
	}
*/
	//draw
	/*
		for (int a = 0; a < hight; a++){
		string show = "";
		for (int b = 0; b < width; b++) {
			if (element->at((a*width) + b).alive == 1) {
				show += char(219);
			}
			else {
				show += char(255);
			}
		}
		cout << show << endl;
	}
	*/


	//leeg variables Elements
	for (int a = 0; a < hight; a++) {
		for (int b = 0; b < width; b++) {
			element->at((a*width) + b).linksBoven = NULL;
			element->at((a*width) + b).links = NULL;
			element->at((a*width) + b).linksOnder = NULL;
			element->at((a*width) + b).boven = NULL;
			element->at((a*width) + b).onder = NULL;
			element->at((a*width) + b).rechtsBoven = NULL;
			element->at((a*width) + b).rechts = NULL;
			element->at((a*width) + b).rechtsOnder = NULL;
		}
	}

	//vul variables Elements
	for (int a = 0; a < hight-1; a++) {
		for (int b = 0; b < width-1; b++) {
			if (((a - 1) * width) + b - 1 >= 0) {
				element->at((a*width) + b).linksBoven = &element->at(((a - 1) * width) + b - 1);
			}
			if ((a * width) + b - 1 >= 0) {
				element->at((a*width) + b).links = &element->at((a * width) + b - 1);
			}
			if (((a + 1) * width) + b - 1 >= 0) {
				element->at((a*width) + b).linksOnder = &element->at(((a + 1) * width) + b - 1);
			}
			if (((a - 1) * width) + b >= 0) {
				element->at((a*width) + b).boven = &element->at(((a - 1) * width) + b);
			}
			if (((a + 1) * width) + b >= 0) {
				element->at((a*width) + b).onder = &element->at(((a + 1) * width) + b);
			}
			if (((a - 1) * width) + b + 1 >= 0) {
				element->at((a*width) + b).rechtsBoven = &element->at(((a - 1) * width) + b + 1);
			}
			if ((a * width) + b + 1 >= 0) {
				element->at((a*width) + b).rechts = &element->at((a * width) + b + 1);
			}
			if (((a + 1) * width) + b + 1 >= 0) {
				element->at((a*width) + b).rechtsOnder = &element->at(((a + 1) * width) + b + 1);
			}
		}
	}

	//update
	for (size_t i = 0; i < 100; i++){
		for (int i = 0; i < hight * width; i++) {
			element->at(i).Population(0);
		}
		for (int i = 0; i < hight * width; i++) {
			element->at(i).liveOrDie();
		}
		clearScreen();
		for (int a = 0; a < hight; a++) {
			string show = "";
			for (int b = 0; b < width; b++) {
				if (element->at((a*width) + b).alive == 1) {
					show += char(219);
				}
				else {
					show += char(255);
				}
			}
			cout << show << endl;
			//delay---------------------------------------
		}
		
	}
	/*
		for (int i = 0; i < hight * width; i++) {
		element->at(i).Population(0);
		element->at(i).liveOrDie();		
	}

	clearScreen();
	for (int a = 0; a < hight; a++) {
		string show = "";
		for (int b = 0; b < width; b++) {
			if (element->at((a*width) + b).alive == 1) {
				show += char(219);
			}
			else {
				show += char(255);
			}
		}
		cout << show << endl;
	}


	*/

	char c;
	cin >> c; 

	delete element;
	return 0;
}