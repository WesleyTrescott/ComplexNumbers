#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "/home/wesley/workspace/ComplexNumbersProject/Complex Numbers/src/ComplexNumber.h"

void testPlusOperator() {
	ComplexNumber a(5, -1);
	ComplexNumber b(2, 1);
	ComplexNumber trueResult(7, 0);
	ComplexNumber actualResult(0, 0);
	actualResult = a + b;
	bool equal = (trueResult.real == actualResult.real && trueResult.imag == actualResult.imag) ? true : false;
	ASSERTM("Problem with plus operator!", equal);
}

void testMinusOperator() {
	ComplexNumber a(5, -1);
	ComplexNumber b(2, 1);
	ComplexNumber trueResult(3, -2);
	ComplexNumber testResult(0, 0);
	testResult = a - b;
	bool equal = (trueResult.real == testResult.real && trueResult.imag == testResult.imag) ? true : false;
	ASSERTM("Problem with minus operator!", equal);
}

void testMultiplicationOperator() {

	ASSERTM("Problem with multiplication operator!", false);
}

void testDivisionOperator() {

	ASSERTM("Problem with division operator!", false);
}

void testConjugate() {

	ASSERTM("Problem with getConjugate method!", false);
}

void testReciprocal() {

	ASSERTM("Problem with getReciprocal method!", false);
}

void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	s.push_back(CUTE(testPlusOperator));
	s.push_back(CUTE(testMinusOperator));
	s.push_back(CUTE(testMultiplicationOperator));
	s.push_back(CUTE(testDivisionOperator));
	s.push_back(CUTE(testConjugate));
	s.push_back(CUTE(testReciprocal));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
    return 0;
}



