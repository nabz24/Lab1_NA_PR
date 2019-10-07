#pragma once

#include <iostream>
#include "Currency.h"

using namespace std;
class Euro : public Currency {

public:

	//Default constructor
	Euro() : Currency() {

	};

	//constructor
	Euro(string note, int whole, int fractional, string coin) : Currency(note, whole, fractional, coin) {

	}

	void printObjectInfo()
	{
		cout << "Eurro" << endl;
	}

	//destructor
	~Euro()
	{
		cout << "Euro destroyed" << endl;

	}


};