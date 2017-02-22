/*
 * Aircraft.hpp
 *
 *  Created on: Oct 27, 2016
 *      Author: Jimmy
 */

#ifndef Aircraft_HPP_
#define Aircraft_HPP_

//Define Global Constants for default values for easy access for future edits
//Defaults for private Aircraft variables
const int DEFAULT_SEATS = 1;
const int DEFAULT_ENGINES = 1;

class Aircraft
{
	private:
		int seating_capacity;
		int number_of_engines;

	public:
		Aircraft(int = DEFAULT_SEATS,
				 int = DEFAULT_ENGINES);
		virtual ~Aircraft();
		virtual void printCharacteristics() const;
		void setSeatingCapacity(int);
		void setNumberOfEngines(int);
		int getSeatingCapacity() const;
		int getNumberOfEngines() const;

};

#endif
