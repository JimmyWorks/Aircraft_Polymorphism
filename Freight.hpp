/*
 * Freight.hpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Jimmy Nguyen
 */


#ifndef FREIGHT_HPP_
#define FREIGHT_HPP_
#include "Aircraft.hpp"

//Define Global Constants for default values for easy access for future edits
//Defaults for private Freight variables
const float DEFAULT_PAYLOAD = 2.0;
const int DEFAULT_SPEED = 300;
const int DEFAULT_RANGE = 2000;


class Freight : public Aircraft
{
	private:
		float payload;
		int cruise_speed;
		int	range;

	public:
		Freight(float = DEFAULT_PAYLOAD,
				int = DEFAULT_SPEED,
				int = DEFAULT_RANGE,
				int = DEFAULT_SEATS,
				int = DEFAULT_ENGINES);
		~Freight();
		void printCharacteristics() const;
		void setPayload(float);
		void setCruiseSpeed(int);
		void setRange(int);
		float getPayload() const;
		int getCruiseSpeed() const;
		int getRange() const;

};



#endif /* FREIGHT_HPP_ */
