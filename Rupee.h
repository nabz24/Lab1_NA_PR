#pragma once


#include <iostream>
#include "Currency.h"

using namespace std;
class Rupee : public Currency {

public:

	//Default constructor
	Rupee() : Currency() {

	};

	//constructor
	Rupee(string note, int whole, int fractional, string coin) : Currency(note, whole, fractional, coin) {

	}

	void printObjectInfo()
	{
		cout << "Ruppeee" << endl;
	}

	//destructor
	~Rupee()
	{
		cout << "Rupee destroyed" << endl;

	}


};