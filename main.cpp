#include <iostream>
#include "Currency.h"
#include "Euro.h"
#include "Dollar.h"
#include "Yen.h"
#include "Rupee.h"
#include "Yuan.h"
#include <string>

using namespace std;

int main(){

	cout << "Hello" << endl;

	Currency d("Dollar", 19, 80, "cents");
	Currency x("Dollar", 9, 89, "cents");

	Currency z;
	// operator overloading example for subrtaction
	z = d - x;
	

	cout << z.getWhole() << endl;
	cout << z.getFractional() << endl;
	d.printObjectInfo();
	cout << (x > d) << endl;
	cout << d << endl;

	//istream overide example
	cin >> z;

	//outstream override example
	cout << z << endl;



	// demonstrate polymorphism
	Dollar doll("d",8,5,"c");
	Euro eu1;
	Yen x1;
	Yuan y1;
	Rupee r1;

	Currency *c1;
	//polymorphims to dollar
	c1 = &doll;
	c1->printObjectInfo();
	//polymorphims to euro
	c1 = &eu1;
	c1->printObjectInfo();
	//polymorphims to yen
	c1 = &x1;
	c1->printObjectInfo();
	//polymorphims to Yuan
	c1 = &y1;
	c1->printObjectInfo();
	//polymorphims to Rupee
	c1 = &r1;
	c1->printObjectInfo();

	system("pause");

return 0;
}