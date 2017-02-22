/*
 * Aircraft.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: Jimmy
 */

#include <iostream>
#include "Aircraft.hpp"

using namespace std;

Aircraft::Aircraft(int initSeats, int initEngines)
{
	seating_capacity = initSeats;
	number_of_engines = initEngines;
}

Aircraft::~Aircraft()
{

}

void Aircraft::printCharacteristics() const
{
	cout << "Type: Default" << endl
		 << "---Characteristics---" << endl
		 << "Seating Capacity: "<< seating_capacity << endl
		 << "Number of Engines: " << number_of_engines << endl << endl;

}

void Aircraft::setSeatingCapacity(int num)
{
	seating_capacity = num;
}
void Aircraft::setNumberOfEngines(int num)
{
	number_of_engines = num;
}

int Aircraft::getSeatingCapacity() const
{
	return seating_capacity;
}
int Aircraft::getNumberOfEngines() const
{
	return number_of_engines;
}



