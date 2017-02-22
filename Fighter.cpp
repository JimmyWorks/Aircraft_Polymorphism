/*
 * Fighter.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include "Fighter.hpp"

using namespace std;

Fighter::Fighter(int initMissiles,
				 int initBombs,
				 int initCannons,
				 int initSeats,
				 int initEngines)
				: Aircraft(initSeats, initEngines)
{
	missile_capacity = initMissiles;
	bomb_capacity = initBombs;
	number_of_cannons = initCannons;
}

Fighter::~Fighter()
{

}

void Fighter::printCharacteristics() const
{
	cout << "Type: Fighter" << endl
		 << "---Characteristics---" << endl
		 << "Seating Capacity: "<< Aircraft::getSeatingCapacity() << endl
		 << "Number of Engines: " << Aircraft::getNumberOfEngines() << endl
		 << "Missle Capacity: " << missile_capacity << endl
		 << "Bomb Capacity: " << bomb_capacity << endl
		 << "Number of Cannons: " << number_of_cannons << endl << endl;

}

void Fighter::setMissileCapacity(int num)
{
	missile_capacity = num;
}

void Fighter::setBombCapacity(int num)
{
	bomb_capacity = num;
}

void Fighter::setNumberOfCannons(int num)
{
	number_of_cannons = num;
}

int  Fighter::getMissileCapacity() const
{
	return missile_capacity;
}

int  Fighter::getBombCapacity() const
{
	return bomb_capacity;
}

int  Fighter::getNumberOfCannons() const
{
	return number_of_cannons;
}
