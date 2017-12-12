/*
 * Swarm.h
 *
 *  Created on: Dec 12, 2017
 *      Author: Ben
 */

#include "Particle.h"

#ifndef SRC_SWARM_H_
#define SRC_SWARM_H_

namespace betaben {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles(){ return m_pParticles; };
};

} /* namespace betaben */

#endif /* SRC_SWARM_H_ */
