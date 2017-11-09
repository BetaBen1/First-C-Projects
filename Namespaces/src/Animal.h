/*
 * Animal.h
 *
 *  Created on: Nov 9, 2017
 *      Author: Ben
 */

#include <iostream>

#ifndef ANIMAL_H_
#define ANIMAL_H_

namespace betaben {

const std::string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace betaben */

#endif /* ANIMAL_H_ */
