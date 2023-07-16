#include "Veterinarian.h"

void Veterinarian::treatAnimal(Animal* obj)
{
	if (Dog* dogPtr = dynamic_cast<Dog*>(obj)) {
		dogPtr->bark();
	}
	else if (Cat* catPtr = dynamic_cast<Cat*>(obj)) {
		catPtr->meow();
	}
	else {
		throw exception("Unknown animal");
	}
}
