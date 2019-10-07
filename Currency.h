#pragma once
#include <iostream>
#include <string>
using namespace std;

class Currency {

private:
	string note;
	int whole;
	int fractional;
	string coin;

public:
	
	Currency()
	{
		note = "None";
		whole = 0;
		fractional = 0;
		coin = "none";
	};

	Currency(string no, int whol, int frac, string coi)
	{
		note = no;
		whole = whol;
		fractional = frac;
		coin = coi;
	}

	~Currency()
	{
		cout << " Currency Destructed " << endl;
	}

	string getNote() const;
	int getWhole() const;
	int getFractional() const;
	string getCoin() const;
	bool operator>(const Currency& z);
	Currency operator-(const Currency& y);
	Currency operator+(const Currency& x);
	virtual void printObjectInfo();
	friend istream& operator>>(istream &input, Currency &l);
	friend ostream& operator<< (ostream &out, Currency &n);



	

	
	


};

