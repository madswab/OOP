#include "Decorator.h"


Decorator::Decorator(Characters * Chara){
	Character = Chara;
}

void Decorator::render(){
	Character->render();
}
