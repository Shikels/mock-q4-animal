// Animal.cpp : Defines the entry point for the console application.
//
#include "stdafx.h" 
#include<iostream>
#include<string>

using namespace std;

class Animal{

public:

	virtual string name(){
		return 0;
	}

	virtual string does(){
		return 0;

	}

};

class Bird : public Animal{

public:
	string name()
	{
		return	" A BIRD";
	}

	string does(){

		return "FLYS";
	}


};

class Dog : public Animal
{
public:
	string name()
	{
		return	 " A DOG";

	}

	string does()
	{
		return "BITES";
	}

};

int main()
{
	Bird b;
	Dog d;
	Animal a;
	Animal *a1 = &b;
	Animal *a2 = &d;
	Animal *a3 = &a;

	a1->name();
	a2->name();

	a1->does();
	a2->does();

	cout << b.name() << " " << b.does() << endl;
	cout << d.name() << " " << d.does() << endl;


	system("pause");
	return 0;


}

