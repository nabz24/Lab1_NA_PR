#include "Currency.h"

//accessors or gettors
string Currency::getNote() const
{
	return note;
}

int Currency::getWhole() const
{
	return whole;
}

int Currency::getFractional() const
{
	return fractional;
}

string Currency::getCoin() const
{
	return coin;
}

void Currency::printObjectInfo()
{
	cout << "Currencyvvvvvvvvvvvvvv" << endl;
}

istream& operator>>(istream &input, Currency &l)
{
	cout << "ENter value for Currency note, whole, fractional, coin" << endl;
	input >> l.note >> l.whole >> l.fractional >> l.coin;
	return input;
}

ostream& operator<< (ostream &out, Currency &n)
{
	out << "Currency object is " << n.whole << " " << n.note << " and " << n.fractional << " " << n.coin;
	return out;
}

bool Currency::operator>(const Currency& z) {
	if (this->whole > z.whole) {
		cout << "yoee" << endl;

	}
	else if (this->whole < z.whole) {
		return false;

	}
	else {
		if (this->fractional > z.fractional) {
			return true;

		}
		else {
			return false;

		}
	}


}

Currency Currency::operator-(const Currency& y) {
	Currency curr;
	if (this->whole - y.whole < 0) {
		curr.whole = 0;
	}
	else {
		curr.whole = this->whole - y.whole;
	}
	if (this->fractional - y.fractional < 0) {
		curr.fractional = 100 + (this->fractional - y.fractional);
		if (curr.whole > 0) {
			curr.whole = curr.whole - 1;
		}
		else {
			curr.whole = 0;
		}
	}
	else {
		curr.fractional = this->fractional - y.fractional;
	}

	return curr;
}

Currency Currency::operator+(const Currency& x) {
	Currency curr;
	curr.whole = this->whole + x.whole;

	if (this->fractional + x.fractional >= 100) {
		int mod = (this->fractional + x.fractional) / 100;
		int remainder = (this->fractional + x.fractional) % 100;

		curr.whole = curr.whole + mod;
		curr.fractional = remainder;
	}
	else {
		curr.fractional = this->fractional + x.fractional;
	}
	return curr;

}