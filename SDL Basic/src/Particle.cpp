/*
 * Particle.cpp
 *
 *  Created on: Dec 12, 2017
 *      Author: Ben
 */

#include "Particle.h"
#include <stdlib.h>

namespace betaben {

Particle::Particle() {

	m_x = 2.0 * rand()/RAND_MAX - 1;
	m_y = 2.0 * rand()/RAND_MAX - 1;

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace betaben */
