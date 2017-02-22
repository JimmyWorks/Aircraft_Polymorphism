/*
 * Freight.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include "Freight.hpp"

using namespace std;

Freight::Freight(float initPayload,
			     int initSpeed,
				 int initRange,
				 int initSeats,
				 int initEngines)
				: Aircraft(initSeats, initEngines)
{
	payload = initPayload;
	cruise_speed = initSpeed;
	range = initRange;
}

Freight::~Freight()
{

}

void Freight::printCharacteristics() const
{
	cout << "Type: Freight" << endl
		 << "---Characteristics---" << endl
		 << "Seating Capacity: "<< Aircraft::getSeatingCapacity() << endl
		 << "Number of Engines: " << Aircraft::getNumberOfEngines() << endl
		 << "Maximum Payload (tons): " << payload << endl
		 << "Cruise Speed (km/hr): " << cruise_speed << endl
		 << "Range Capability (NM): " << range << endl << endl;

}

void Freight::setPayload(float num)
{
	payload = num;
}

void Freight::setCruiseSpeed(int num)
{
	cruise_speed = num;
}

void Freight::setRange(int num)
{
	range = num;
}

float Freight::getPayload() const
{
	return payload;
}

int Freight::getCruiseSpeed() const
{
	return cruise_speed;
}

int Freight::getRange() const
{
	return range;
}

