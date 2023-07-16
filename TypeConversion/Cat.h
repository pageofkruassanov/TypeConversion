#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	Cat(string name, string type, double age) : Animal{ name, type, age } {};
	void PrintAnimal();
	void meow();
};

