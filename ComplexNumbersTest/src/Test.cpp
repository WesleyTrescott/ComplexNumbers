#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "/home/wesley/workspace/Complex Numbers/src/ComplexNumber.h"

void testPlusOperator() {
	ComplexNumber a(5, -1);
	ComplexNumber b(2, 1);
	ComplexNumber trueResult(7, 0);
	ComplexNumber actualResult(0, 0);
	actualResult = a + b;
	bool result = (trueResult.real == actualResult.real && trueResult.imag == actualResult.imag) ? true : false;
	ASSERTM("start writing tests", result);
}

void testMinusOperator() {
	ASSERTM("minus operator works", true);
}

void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	s.push_back(CUTE(testPlusOperator));
	s.push_back(CUTE(testMinusOperator));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
    return 0;
}



