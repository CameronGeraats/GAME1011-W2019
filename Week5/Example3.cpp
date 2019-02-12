#include <iostream>
using namespace std;

enum Size {SMALL, MEDIUM, LARGE};

class Animal	// Abstract class b/c it has 1 or more virtual functions
{
protected:
	string species;
	Size size;
public:
	virtual void taunt() const = 0; // Pure virtual function
	void setSpecies(string species)
	{
		this->species = species;
	}
	string getSpecies() const
	{
		return species;
	}
	void setSize(Size s)
	{
		size = s;
	}
	Size getSize() const
	{
		return size;
	}
};

class Dog : public Animal
{
public:
	virtual void taunt() const
	{
		cout << "Woof woof!" << endl;
	}
};

class Huskie : public Dog
{
	virtual void taunt() const
	{
		cout << "I'm a huskie! roar!" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void taunt() const
	{
		cout << "Meow meow! Hssssssssssssssssssss" << endl;
	}
};



int main()
{
	const int NUM_ANIMALS = 4;

	Animal* animalArr[] = 
	{
		new Dog(),
		new Cat(),
		new Huskie(),
		new Dog()
	};

	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		animalArr[i]->setSize(LARGE);
	}

	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		animalArr[i]->taunt();
	}

	return 0;
}