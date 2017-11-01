#include <iostream>
#include<fstream>
#include <string>
#define FILE "D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6\\test.txt"

char getCharPos(int number) {
	char ch;
	std::ifstream fileInput;

	fileInput.open(FILE);
	for (int i = 0; i < number; i++) {
		fileInput.get(ch);
	}
	fileInput.close();
	return ch;
}

int main() {
	int c = 0;
	char ch = 0;

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	in_stream >> std::noskipws;
	in_stream >> ch;
	std::cout << ch;
	while (!in_stream.eof()) {
		in_stream >> ch;
		std::cout << ch;
	}
	std::cout << "" << std::endl;

	in_stream.close();
	in_stream.open(FILE);

	char current_char;
	if (in_stream.is_open()){
		while (in_stream.get(current_char)) {
			if (current_char == EOF){
				break;
			}
			c++;
		}
		std::cout << c << std::endl;
	}

	std::ofstream out_stream;
	out_stream.open("D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6\\achterstevoren.txt");
	while (!out_stream) {
		std::cout << "probleem" << std::endl;
		exit(2);
	}
	
	in_stream.close();

	for (int number = c; number > 0; number--){
		out_stream << getCharPos(number);
	}
	out_stream.close();

	//-------------------------------------------------------
	in_stream.open(FILE);

	std::ifstream in_stream2;
	in_stream2.open("D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6\\achterstevoren.txt");
	while (!in_stream2) {
		std::cout << "probleem" << std::endl;
		exit(3);
	}

	std::ofstream out_stream2;
	out_stream2.open("D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6\\Combi.txt");
	while (!out_stream2) {
		std::cout << "probleem" << std::endl;
		exit(4);
	}

	do{
		std::string data;

		if (std::getline(in_stream, data)) {
			std::cout << data;
			out_stream2 << data;
		}

		if (std::getline(in_stream2, data)) {
			std::cout << data;
			out_stream2 << data << std::endl;
		}

	} while (in_stream || in_stream2);


	out_stream2.close();
	in_stream.close();
	in_stream2.close();


	char b;
	std::cin >> b;

	return 0;
}