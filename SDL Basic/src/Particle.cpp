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

Particle::Particle(): m_x(0), m_y(0){

//	m_x = 2.0 * rand()/RAND_MAX - 1;
//	m_y = 2.0 * rand()/RAND_MAX - 1;
//	m_xSpeed = 0.01 * (2.0 * rand()/RAND_MAX - 1);
//	m_ySpeed = 0.01 * (2.0 * rand()/RAND_MAX - 1);
//	m_xSpeed = (tan(m_x*.001)*25);
//	m_ySpeed = (tan(m_y*.001)*25);

	init();

}

void Particle::init(){

	m_x = 0;
	m_y = 0;

	m_speed = (0.04*rand())/RAND_MAX;

	m_speed *= m_speed;

	m_direction = (2*M_PI*rand())/RAND_MAX;

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval){

//	m_x += m_xSpeed;
//	m_y += m_ySpeed;
//
//	if(m_x < -1.0 || m_x >= 1.0){
//		m_xSpeed = -m_xSpeed;
//	}
//
//	if(m_y < -1.0 || m_y >= 1.0){
//			m_ySpeed = -m_ySpeed;
//	}

	m_direction += interval*.004;

	double xSpeed = m_speed*cos(m_direction);
	double ySpeed = m_speed*sin(m_direction);

	m_x += xSpeed*interval;
	m_y += ySpeed*interval;

//	if(m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1){
//		init();
//	}

//	if(rand() < RAND_MAX/100){
//		init();
//	}

}

} /* namespace betaben */
