// Fighter.hpp
//  Created on: Oct 24, 2016
//      Author: Jimmy Nguyen

#ifndef FIGHTER_HPP_
#define FIGHTER_HPP_
#include "Aircraft.hpp"

//Define Global Constants for default values for easy access for future edits
//Defaults for private Fighter variables
const int DEFAULT_MISSLES = 0;
const int DEFAULT_BOMBS = 0;
const int DEFAULT_CANNONS =0;


class Fighter : public Aircraft
{
	private:
		int missile_capacity;
		int bomb_capacity;
		int number_of_cannons;
	public:
		Fighter(int = DEFAULT_MISSLES,
				int = DEFAULT_BOMBS,
				int = DEFAULT_CANNONS,
				int = DEFAULT_SEATS,
				int = DEFAULT_ENGINES);
		~Fighter();
		void printCharacteristics() const;
		void setMissileCapacity(int);
		void setBombCapacity(int);
		void setNumberOfCannons(int);
		int  getMissileCapacity() const;
		int  getBombCapacity() const;
		int  getNumberOfCannons() const;

};



#endif /* FIGHTER_HPP_ */
