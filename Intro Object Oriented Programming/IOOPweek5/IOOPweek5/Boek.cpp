#include "Boek.h"


Boek::Boek(std::string type){
	_type = type;
}


Boek::Boek(){

}


Boek::~Boek(){
	std::cout << "deleted boek " << _type << std::endl;
}
