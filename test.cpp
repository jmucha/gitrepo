#include "add.h"
#include "multiply.h"
#include "pow.h"
#include <iostream>

void areEquals(double expected, double got){
	if(expected != got) {
		std::cout<< "Expected: " << expected << " but is: " << got << std::endl;
	}
}



int main(){

	areEquals(4, add(2,2));
	areEquals(8, multiply(4,2));
	areEquals(16, pow(2,4));	

	std::cout << "Tests end" << std::endl;
	return 0;
}
