#include <iostream>
#include <string>

class Animal
{
public:
	Animal() {};
	virtual void speak()=0;
};

class Bird : public Animal
{	
	
public:
	Bird() {};
	void speak();
};

class Mammal : public Animal
{	
	
public:
	Mammal() {};
	void speak();
	void bark();
};

class Cat : public Mammal
{	
	
public:
	Cat() {};
	void speak();
	void purr();
};

class Dog : public Mammal
{
	
public:
	Dog() {};
	void speak();
	void bark();
};




void Mammal::bark()
{
}

void Dog::bark()
{
	printf("bark");
}

void Cat::purr()
{
	printf("purr");
}



void Mammal::speak()
{
}

void Dog::speak()
{
	printf("woof");
}

void Cat::speak()
{
	printf("meow");
}

void Bird::speak()
{
	printf("tweet \n");
}

int main()
{
	Cat Guppy;
	Guppy.speak();
	Dog Sparky;
	Sparky.speak();
	Bird Tweeter;
	Tweeter.speak();

	Mammal *Random = new Mammal;
	Random->speak();

	return 0;
}