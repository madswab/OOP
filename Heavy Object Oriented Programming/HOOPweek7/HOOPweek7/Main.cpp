#include <iostream>
#include <vector>
#include <string>

#include "Character.h"

using namespace std;

void render(vector<Character*> chara) {
	for (auto& character : chara) {
		cout << "-------------------------------" << endl;
		character->render();
	}
	cout << "-------------------------------" << endl;
}

int main() {

	vector<Character*> characters;

	Character* character;
	int characterType;
	int totaalCharacters = Character::totaal;

	cout << "voeg character 0 tot " << totaalCharacters << " toe : ";

	while (true) {
		cin >> characterType;
		if (characterType > totaalCharacters){
			cout << "Max "<< totaalCharacters << endl;
			break;
		}
		if (characterType == 0) {
			break;
		}
		else {
			character = Character::makeCharacter(characterType);
		}
		characters.push_back(character);
		render(characters);
	}

	char c;
	cin >> c;

	return 0;
}