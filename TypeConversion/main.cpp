#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Veterinarian.h"

int main()
{
    setlocale(0, "Rus");
    //first task:
    {
        Animal* animalPtr = new Dog("Tuzik", "Dog", 0.2);
        if (Dog* dogPtr = dynamic_cast<Dog*>(animalPtr)) {
            dogPtr->bark();
        }
        else {
            cout << "Этот объект не является собакой!";
        }
        if (Cat* catPtr = dynamic_cast<Cat*>(animalPtr)) {
            catPtr->meow();
        }
        else {
            cout << "Этот объект не является котом!";
        }
    }
    cout << endl << "-------------------------" << endl;
    //second task:
    {
        Veterinarian vet;
        Animal* animalPtr = new Cat("Barsik", "Cat", 1);
        try {
            vet.treatAnimal(animalPtr);
        }
        catch (const exception& ex) {
            cerr << ex.what();
        }
        animalPtr = nullptr;
        try {
            vet.treatAnimal(animalPtr);
        }
        catch (const exception& ex) {
            cerr << ex.what();
        }
    }
    return 0;
}