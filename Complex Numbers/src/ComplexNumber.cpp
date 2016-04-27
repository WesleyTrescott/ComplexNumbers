/*
 * ComplexNumber.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: wesley
 */

#include "ComplexNumber.h"

// CONSTRUCTOR
ComplexNumber::ComplexNumber(float r = 0.0f, float im = 0.0f)
{
	real = r;
	imag = im;
}

// COPY CONSTRUCTOR
ComplexNumber::ComplexNumber(ComplexNumber& c)
{
  this->real = c.real;
  this->imag = c.imag;

}


void ComplexNumber::operator=(const ComplexNumber& c)
{
	(*this).real = c.real;
	(*this).imag = c.imag;
}


ComplexNumber ComplexNumber::operator+(ComplexNumber c)
{
	ComplexNumber tmp;
	tmp.real = this->real + c.real;
	tmp.imag = this->imag+c.imag;
	return tmp;
}

ComplexNumber ComplexNumber::operator-(ComplexNumber c)
{
	ComplexNumber tmp;
	tmp.real = this->real - c.real;
	tmp.imag = this->imag - c.imag;
	return tmp;
}

ComplexNumber ComplexNumber::operator*(ComplexNumber c)
{
	ComplexNumber tmp;
	tmp.real = (real * c.real) - (imag * c.imag);
	tmp.imag = (real * c.imag) + (imag * c.real);
	return tmp;
}

ComplexNumber ComplexNumber::operator/(ComplexNumber c)
{
	float div = (c.real * c.real) + (c.imag * c.imag);
	ComplexNumber tmp;
	tmp.real = (real * c.real) + (imag * c.imag);
	tmp.real /= div;
    tmp.imag = (imag * c.real) - (real * c.imag);
    tmp.imag /= div;
    return tmp;
}

ComplexNumber ComplexNumber::getConjugate()
{
	ComplexNumber tmp;
	tmp.real = this -> real;
	tmp.imag = this -> imag * -1;
	return tmp;
}

ComplexNumber ComplexNumber::getReciprocal()
{
	ComplexNumber t;
	t.real = real;
	t.imag = imag * -1;
	float div;
	div = (real * real) + (imag * imag);
	t.real /= div;
	t.imag /= div;
	return t;
}

float ComplexNumber::getModulus()
{
	float z;
	z = (real * real) + (imag * imag);
	z = sqrt(z);
	return z;
}

void ComplexNumber::setData(float r, float i)
{
	real = r;
	imag = i;
}

void ComplexNumber::getData()
{
	cout << "Enter Real: ";
	cin >> this -> real;
	cout << "Enter Imaginary: ";
	cin >> this -> imag;

}

float ComplexNumber::getReal()
{
	return real;
}

float ComplexNumber::getImaginary()
{
	return imag;
}

bool ComplexNumber::operator==(ComplexNumber c)
{
	return (real == c.real) && (imag == c.imag) ? 1 : 0;
}

ostream& operator<<(ostream& s, ComplexNumber& c)
{
	s << "Real Part = " << c.real << endl
			<< "Imaginary Part = " << c.imag << endl;
	s << "z = " << c.real << setiosflags(ios::showpos)
			<< c.imag << "i" << endl << resetiosflags(ios::showpos);
   return s;
}


