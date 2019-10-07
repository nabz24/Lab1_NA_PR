#pragma once

#include <iostream>
#include "Currency.h"

using namespace std;
class Yen : public Currency {

public:

	//Default constructor
	Yen() : Currency() {

	};

	//constructor
	Yen(string note, int whole, int fractional, string coin) : Currency(note, whole, fractional, coin) {

	}

	void printObjectInfo()
	{
		cout << "Yen" << endl;
	}

	//destructor
	~Yen()
	{
		cout << "Yen destroyed" << endl;

	}


};
