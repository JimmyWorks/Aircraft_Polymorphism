//============================================================================
// Name        : CS1337.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <fstream>
#include "Aircraft.hpp"
#include "Fighter.hpp"
#include "Freight.hpp"
#include "Recon.hpp"
using namespace std;

void parseString(string, vector<string*> &);

typedef enum _AircraftType
{
	AIRCRAFT,
	FIGHTER,
	FREIGHT,
	RECON

}AircraftType;

//INPUT FILE MUST BE IN THE FOLLOWING FORMAT:
//Each line will command a 'create new' or 'print'
//First letter in the line must be a "n" or a "p"
//Second character must be a number from index 0-3
//Please reference AircraftType Enum table above for name
//The remaining arguments passed can vary from 0 to
//the max arguments for that type.  See below:
// Aircraft: 0-2 arguments (int, int)
// Fighter:  0-5 arguments (int, int, int, int, int)
// Freight:  0-5 arguments (float, int, int, int, int)
// Recon:    0-4 arguments (int, int, int, int)
//Please check each respective header file for specifics
//on what the argument represents.  Any unspecified arguments
//will be defaulted by the program.
//Delimiters for the input file are commas, spaces and tabs.
//Also, if more than the maximum arguments allowed are passed
//in for the respective class, the extra arguments are ignored.

int main() {

	string infileName;
	ifstream infile;
	bool validInfile = 0;
	string line;

	cout << "-------------------------------------------------" << endl
		 << " Welcome to Jimmy's Military Aircraft Resource!" << endl
		 << "-------------------------------------------------"
		 << endl << endl;

//This do-while loop will ask for a valid input file and check if that input file exists and can be opened
	do
	{
		//Prompt the User for the Input File
			cout << "Please enter the input file name: " << endl << endl;
			cin >> infileName;
			cout << endl << "The user entered file name: " << infileName << endl; //debug

		//Open the input file for reading.
			infile.open(infileName.c_str());

		//Check if we successfully opened input file.
			if (!infile)
			{
				cout << "Error: Unable to open file '" << infileName << "' for reading." << endl;
				cout << "Please try again." << endl << endl;
			}
			else
			{
				cout << "Successfully opened file '" << infileName << "' for reading." << endl << endl;
				validInfile = 1;
			}
	}while(!validInfile);

	vector<Aircraft*> AircraftDatabase; //Stores all the aircrafts created

//Within this while loop, every line in the input file will be tokenized, interpreted into values, and executed
	while(!infile.eof())
	{
		vector<string*> lineList; //Stores tokenized strings from the line in the file
		int type; //Quick, readable look at which type of craft is being created or inspected
//		int index = 0; //Index for each created aircraft or specialized aircraft stored in the AircraftDatabase vector
		int numArg = -1; //Counts how many arguments will be passed into the Constructor (-1 error sentinel)


		getline(infile, line);
//		cout << "DEBUG "<< line << endl;

		parseString(line, lineList);

		//Check the number of arguments being passed (is zero for print calls)
		numArg = lineList.size()-2;

		//Check what needs to be done
		//For creating new aircraft object
		if(*lineList[0]=="n")
		{
			//For readability, find the type immediately compare to AircraftType Enum list
			type = atoi((*lineList[1]).c_str());

			switch (type)
			{
				case AIRCRAFT:

					switch(numArg)
					{
						case 0: AircraftDatabase.push_back(new Aircraft());
						cout << ">>Created an aircraft with no arg" << endl;
								break;
						case 1: AircraftDatabase.push_back(new Aircraft(atoi((*lineList[2]).c_str())));
						cout << ">>Created an aircraft with 1 arg" << endl;
								break;
						default: AircraftDatabase.push_back(new Aircraft(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str())));
						cout << ">>Created an aircraft with 2 args" << endl;
					}

					break;
				case FIGHTER:

					switch(numArg)
					{
						case 0: AircraftDatabase.push_back(new Fighter());
						cout << ">>Created a fighter with no arg" << endl;
								break;
						case 1: AircraftDatabase.push_back(new Fighter(atoi((*lineList[2]).c_str())));
						cout << ">>Created a fighter with 1 arg" << endl;
								break;
						case 2: AircraftDatabase.push_back(new Fighter(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str())));
						cout << ">>Created a fighter with 2 args" << endl;
								break;
						case 3: AircraftDatabase.push_back(new Fighter(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str())));
						cout << ">>Created a fighter with 3 args" << endl;
								break;
						case 4: AircraftDatabase.push_back(new Fighter(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str()), atoi((*lineList[5]).c_str())));
						cout << ">>Created a fighter with 4 args" << endl;
								break;
						default: AircraftDatabase.push_back(new Fighter(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str()), atoi((*lineList[5]).c_str()), atoi((*lineList[6]).c_str())));
						cout << ">>Created a fighter with 5 args" << endl;
					}

					break;
				case FREIGHT:

					switch(numArg)
					{
						case 0: AircraftDatabase.push_back(new Freight());
						cout << ">>Created a freight with no arg" << endl;
								break;
						case 1: AircraftDatabase.push_back(new Freight(atof((*lineList[2]).c_str())));
						cout << ">>Created a freight with 1 args" << endl;
								break;
						case 2: AircraftDatabase.push_back(new Freight(atof((*lineList[2]).c_str()), atoi((*lineList[3]).c_str())));
						cout << ">>Created a freight with 2 args" << endl;
								break;
						case 3: AircraftDatabase.push_back(new Freight(atof((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str())));
						cout << ">>Created a freight with 3 args" << endl;
								break;
						case 4: AircraftDatabase.push_back(new Freight(atof((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str()), atoi((*lineList[5]).c_str())));
						cout << ">>Created a freight with 4 args" << endl;
								break;
						default: AircraftDatabase.push_back(new Freight(atof((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str()), atoi((*lineList[5]).c_str()), atoi((*lineList[6]).c_str())));
						cout << ">>Created a freight with 5 args" << endl;
					}

					break;
				case RECON:

					switch(numArg)
					{
						case 0: AircraftDatabase.push_back(new Recon());
						cout << ">>Created a recon with no arg" << endl;
								break;
						case 1: AircraftDatabase.push_back(new Recon(atoi((*lineList[2]).c_str())));
						cout << ">>Created a recon with 1 arg" << endl;
								break;
						case 2: AircraftDatabase.push_back(new Recon(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str())));
						cout << ">>Created a recon with 2 args" << endl;
								break;
						case 3: AircraftDatabase.push_back(new Recon(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str())));
						cout << ">>Created a recon with 3 args" << endl;
								break;
						default: AircraftDatabase.push_back(new Recon(atoi((*lineList[2]).c_str()), atoi((*lineList[3]).c_str()), atoi((*lineList[4]).c_str()), atoi((*lineList[5]).c_str())));
						cout << ">>Created a recon with 4 args" << endl;
					}

					break;
				default:
					cout << "An error has occurred.  Next line." << endl;
			}

		}
		//For printing characteristics of an existing aircraft
		else if(*lineList[0]=="p")
		{
			unsigned int index = atoi((*lineList[1]).c_str());

			cout << "_______________________________________________"<< endl << endl;

			if(index==0)
			{
				cout << "Printing full Aircraft Database... " << endl << endl;
				for(unsigned int i=0; i < AircraftDatabase.size(); i++)
				{
					cout << "Aircraft Index #" << i+1 << endl;
					AircraftDatabase[i]->printCharacteristics();
				}
				cout << endl;
			}
			else
			{
				if (index <= AircraftDatabase.size())
				{
					cout << "Found! Aircraft Index #" << index << endl;
					AircraftDatabase[index-1]->printCharacteristics();
				}
				else
					cout << "The aircraft in index " << *lineList[1] << " does not exist." << endl;

				cout << endl;
			}

		}
		//For error checking on first character in the line (if not "n" or "p")
		else
			cout << "Invalid command due to syntax in input file line." << endl;

	}

	cout << "_______________________________________________"<< endl << endl;
	cout << "Completed all tasks in: " << infileName << endl << endl;
	infile.close();

	cout << "--------------------------------------------------------------\n\n"
		 << "Thank you for using Jimmy's Military Aircraft Resource!\n\n"
		 << "Written by: Jimmy Nguyen\n"
		 << "For all questions, email: Jimmy@JimmyWorks.net\n\n"
		 << "--------------------------------------------------------------\n" << endl;


// Don't forget to close file and free all strings
	return 0;
}


//This is the tokenizer function to break down each command line into bite-sized chunks to convert into values
void parseString(string theLine, vector<string *> &theList)
{
	// Make a copy as a C-style string NULL terminated
	char buffer[theLine.length()+1];
	theLine.copy(buffer, theLine.length(), 0);
	buffer[theLine.length()]='\0';

	//Create a pointer to a char, i.e. token is a character array
	char * token;

	//Parse the first element based on these delimiters defined below and assign pointer to 'token'
	token = strtok(buffer, ", \t");

	//Loop through the
	while(token != NULL)
		{
//			cout << "DEBUG  Token was: " << token << endl;  //Use this debug to test functioning tokenizer
			theList.push_back(new string(token));
			token = strtok(NULL, ", \t");
		}
}
