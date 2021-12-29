// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
#include <fstream> // file stream to read and write to files

using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	double numAmount = 0,
		numSum = 0,
		numAvg = 0,
		num;
	ifstream randomFile; // input file stream

	// Inform user what program does


	// Prompt user to enter data needed by the program
	randomFile.open("random.txt");	// open file
	if (!randomFile)	// if file does not open print error message
	{
		cout << "I can't find the file, feels bad man." << endl;
	}
	
	cout << "Reading data... " << endl;

	while (randomFile >> num) //while randomFile reads a num it will be true, no num = false
	{
		numAmount++; // increment numAmount for each number read in the file
		numSum += num; // add each number to numSum for each number read
	}

	cout << "Amount of numbers: " << numAmount << endl;
	cout << "Sum: " << numSum << endl;
	numAvg = numSum / numAmount; // average calculation
	cout << "Average: " << numAvg << endl;


	// A software algorithm would typically be executed after all data has been input


	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

// PROOF
// Program output copied into the below comment section
/*
Reading data...
Amount of numbers: 200
Sum: 105527
Average: 527.635
Press any key to continue . . .
*/