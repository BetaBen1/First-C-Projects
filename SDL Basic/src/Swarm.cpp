/*
 * Swarm.cpp
 *
 *  Created on: Dec 12, 2017
 *      Author: Ben
 */

#include "Swarm.h"

namespace betaben {

Swarm::Swarm() {

	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

void Swarm::update() {
	for (int i = 0; i < Swarm::NPARTICLES; i++) {

		m_pParticles[i].update();

	}
}

} /* namespace betaben */
