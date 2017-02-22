/*
 * Recon.hpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Jimmy Nguyen
 */


#ifndef RECON_HPP_
#define RECON_HPP_
#include "Aircraft.hpp"

//Define Global Constants for default values for easy access for future edits
//Defaults for private Recon variables
const int DEFAULT_NUM_CAM = 0;
const int DEFAULT_NUM_RADAR = 1;

class Recon : public Aircraft
{
	private:
		int num_of_cameras;
		int num_of_radars;

	public:
		Recon(int = DEFAULT_NUM_CAM,
			  int = DEFAULT_NUM_RADAR,
			  int = DEFAULT_SEATS,
			  int = DEFAULT_ENGINES);
		~Recon();
		void printCharacteristics() const;
		void setNumOfCameras(int);
		void setNumOfRadars(int);
		int getNumOfCameras() const;
		int getNumOfRadars() const;
};



#endif /* RECON_HPP_ */
