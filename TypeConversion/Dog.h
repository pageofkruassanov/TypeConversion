#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(string name, string type, double age) : Animal{ name,type,age } {};
	void PrintAnimal();
	void bark();
};

