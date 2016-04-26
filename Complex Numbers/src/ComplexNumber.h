/*
 * ComplexNumber.h
 *
 *  Created on: Apr 18, 2016
 *      Author: wesley Trescott
 */

#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

class ComplexNumber
{
public:
	float real;      // Real Part
	float imag;      //  Imaginary Part

	ComplexNumber(float,float);
    ComplexNumber(ComplexNumber&);
    ComplexNumber operator+(ComplexNumber);
    ComplexNumber operator-(ComplexNumber);
    ComplexNumber operator*(ComplexNumber);
    ComplexNumber operator/(ComplexNumber);
    ComplexNumber getConjugate();
    ComplexNumber getReciprocal();
	float getModulus();
    void setData(float,float);
    void getData();
    float getReal();
    float getImaginary();
    bool operator==(ComplexNumber);
    void operator=(const ComplexNumber&);
    friend ostream& operator<<(ostream &s,ComplexNumber &c);
};

#endif /* COMPLEXNUMBER_H_ */
