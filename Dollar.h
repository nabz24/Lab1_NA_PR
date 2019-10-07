#pragma once

#include <iostream>
#include "Currency.h"

using namespace std;
class Dollar : public Currency {

public:

	//Default constructor
	Dollar() : Currency() {

	};

	//constructor
	Dollar(string note, int whole, int fractional, string coin) : Currency(note, whole, fractional, coin) {

	}

	void printObjectInfo()
	{
		cout << "Dooollaaaaaaaaaa" << endl;
	}

	//destructor
	~Dollar()
	{
		cout << "Dollar destroyed" << endl;

	}


};