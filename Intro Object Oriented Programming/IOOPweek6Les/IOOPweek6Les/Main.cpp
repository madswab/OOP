#include<iostream>
#include<fstream>
#include <string>
#define FILE "D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6Les\\test.txt"

int main() {
	char ch;

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream){
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}
	
	/*
	in_stream.get(ch);
	std::cout << ch << std::endl;
	while (!in_stream.eof()){
		in_stream.get(ch);
		std::cout << ch ;
	}
	std::cout << "" << std::endl;
	*/

	/*
	in_stream >> std::noskipws;
	in_stream >> ch;
	std::cout << ch;
	while (!in_stream.eof()) {
		in_stream >> ch;
		std::cout << ch;
	}
	std::cout << "" << std::endl;
	*/

	/*
	std::string data;
	getline(in_stream, data);
	std::cout << data;

	while (!in_stream.eof()) {
		getline(in_stream, data);
		std::cout << data;
	}
	std::cout << "" << std::endl;
	*/
		
	//in_stream.close();

	std::ofstream out_stream;
	out_stream.open("D:\\Documents\\School\\Jaar2\\Intro Object Oriented Programming\\IOOPweek6Les\\test2.txt");
	while (!out_stream) {
		std::cout << "probleem" << std::endl;
		exit(2);
	}

	bool skip = true;
	in_stream >> std::noskipws;
	while (!in_stream.eof()){
		in_stream >> ch;

		skip = !skip;
		if (!skip){
			out_stream << ch;
		}
	}


	//out_stream.close();
	in_stream.close();

	std::cout << "" << std::endl;




	char c;
	std::cin >> c;

	return 0;
}