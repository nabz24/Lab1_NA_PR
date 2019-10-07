
#pragma once

#include <iostream>
#include "Currency.h"

using namespace std;
class Yuan : public Currency {

public:

	//Default constructor
	Yuan() : Currency() {

	};

	//constructor
	Yuan(string note, int whole, int fractional, string coin) : Currency(note, whole, fractional, coin) {

	}

	void printObjectInfo()
	{
		cout << "Yuan" << endl;
	}

	//destructor
	~Yuan()
	{
		cout << "Yuan destroyed" << endl;

	}


};