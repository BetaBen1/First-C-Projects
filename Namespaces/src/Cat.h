/*
 * Cat.h
 *
 *  Created on: Nov 8, 2017
 *      Author: Ben
 */

#include <iostream>

#ifndef SRC_CAT_H_
#define SRC_CAT_H_

namespace cats {

const std::string CATNAME = "Freddy";

class Cat {
public:
	Cat();
	virtual ~Cat();

	void speak();
};

}

#endif /* SRC_CAT_H_ */
