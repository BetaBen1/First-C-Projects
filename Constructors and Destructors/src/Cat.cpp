/*
 * Cat.cpp
 *
 *  Created on: Aug 30, 2017
 *      Author: Ben
 */

#include "Cat.h"
#include <iostream>

//void Cat::makeHappy(){
//	happy = true;
//}
//
//void Cat::makeSad(){
//	happy = false;
//}

Cat::Cat(){
	std::cout << "Cat created." << std::endl;
	happy = true;
}

void Cat::speak(){
	if(happy){
		std::cout << "Meow!" << std::endl;
	} else {
		std::cout << "Hissssss" << std::endl;
	}
}
