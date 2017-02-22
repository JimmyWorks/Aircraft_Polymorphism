/*
 * Recon.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include "Recon.hpp"

using namespace std;


Recon::Recon(int initNumCam,
		     int initNumRadar,
			 int initSeats,
			 int initEngines)
			: Aircraft(initSeats, initEngines)
{
	num_of_cameras = initNumCam;
	num_of_radars = initNumRadar;
}

Recon::~Recon()
{

}

void Recon::printCharacteristics() const
{
	cout << "Type: Recon" << endl
		 << "---Characteristics---" << endl
		 << "Seating Capacity: "<< Aircraft::getSeatingCapacity() << endl
		 << "Number of Engines: " << Aircraft::getNumberOfEngines() << endl
		 << "Cameras Equipped: " << num_of_cameras << endl
		 << "Radars Equipped: " << num_of_radars << endl << endl;

}

void Recon::setNumOfCameras(int num)
{
	num_of_cameras = num;
}

void Recon::setNumOfRadars(int num)
{
	num_of_radars = num;
}

int Recon::getNumOfCameras() const
{
	return num_of_cameras;
}

int Recon::getNumOfRadars() const
{
	return num_of_radars;
}
