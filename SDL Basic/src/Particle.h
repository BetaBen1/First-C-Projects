/*
 * Particle.h
 *
 *  Created on: Dec 12, 2017
 *      Author: Ben
 */

#ifndef SRC_PARTICLE_H_
#define SRC_PARTICLE_H_

namespace betaben {

struct Particle {
	double m_x;
	double m_y;
public:
	Particle();
	virtual ~Particle();
	void update();
};

} /* namespace betaben */

#endif /* SRC_PARTICLE_H_ */
