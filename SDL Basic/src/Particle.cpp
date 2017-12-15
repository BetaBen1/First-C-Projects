/*
 * Particle.cpp
 *
 *  Created on: Dec 12, 2017
 *      Author: Ben
 */

#include "Particle.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>

namespace betaben {

Particle::Particle() {

	m_x = 2.0 * rand()/RAND_MAX - 1;
	m_y = 2.0 * rand()/RAND_MAX - 1;

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(){
	//const double xSpeed = 0.01 * (2.0 * rand()/RAND_MAX - 1);
	//const double ySpeed = 0.01 * (2.0 * rand()/RAND_MAX - 1);

	const double xSpeed = (sin(m_x*.001)*10);
	//std::cout << "xSpeed: " << xSpeed << std::endl;
	const double ySpeed = (sin(m_y*.001)*10);
	//std::cout << "ySpeed: " << ySpeed << std::endl;

	m_x += xSpeed;
	m_y += ySpeed;


}

} /* namespace betaben */
