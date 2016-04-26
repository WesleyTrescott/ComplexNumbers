/*
 * main.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: wesley Trescott
 */
#include "/home/wesley/workspace/Complex Numbers/src/ComplexNumber.h"
#include <iostream>
using namespace std;

int main()
{
	ComplexNumber a(10.0f, -2.f); // Calls Constructor
	cout << a << endl;               // Calls the overloaded << operator
	ComplexNumber b(-2.0f, 0.0f);         // Calls Constructor
	ComplexNumber c = b;                                                                    // Calls Copy Constructor
	c = a;                                                                                                                       // calls overloaded = operator
	b.getData();                                                                    // Calls Getdata()
	c.getData();
	if(b == c)            // calls overloaded == operator
		cout << "b == c";
    else
    	cout << "b != c";

	cout << endl << c.getModulus() << endl; // calls getModulus function()

	ComplexNumber d(0, 0);
	d = a + b;   // Calls overloaded +
	cout << d << endl;
	d = a - b;                 // Calls overloaded -
	cout << d << endl;
	d = a * b;        // calls overloaded *
	cout << d << endl;
	d = a / b;        // calls overloaded /
	cout << d << endl;

	return 0;
}


