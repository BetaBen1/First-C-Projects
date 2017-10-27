/*
 * Yaaaayyy! I'm finally to pointers!
 */

#include <iostream>

void manipulate(double *pValue){
	std::cout << "2. Value of double before/during manipulate: " << *pValue << std::endl;
	*pValue = 10.0;
	std::cout << "3. Value of double during/after manipulate: " << *pValue << std::endl;
}

int main(){

	int nValue = 8;

	int *pnValue = &nValue;

	std::cout << "Int value: " << nValue << std::endl;
	std::cout << "Pointer to int address: " << pnValue << std::endl;

	std::cout << "Int value via pointer: " << *pnValue << std::endl;

	std::cout << "========================" << std::endl;
	double dValue = 123.4;
	double *dpValue = &dValue;

	std::cout << "1. dValue: " << dValue << std::endl;
	manipulate(dpValue);
	std::cout << "4. dValue: " << dValue << std::endl;

	return 0;
}
