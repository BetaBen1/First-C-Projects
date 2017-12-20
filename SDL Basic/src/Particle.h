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
	double m_x2;
	double m_y;
	double m_y2;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace betaben */

#endif /* SRC_PARTICLE_H_ */
