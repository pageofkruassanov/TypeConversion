#pragma once
#include <iostream>
using namespace std;
class Animal
{
protected:
	string name;
	string type;
	double age;
public:
	Animal(string name, string type, double age) : name{ name }, type{ type }, age{ age } {};
	virtual void PrintAnimal() = 0;
};


