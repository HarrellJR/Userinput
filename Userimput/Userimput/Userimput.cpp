// Jeremy Harrell
//ITSE 1307
//Programming Problem length of user input 
//Programming the length of the imput

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//Setting up the numbers
	int intTotal = 0;
	int intHigherNumber = 10;
	int intLowerNumber = 5;
	
	//Entering imput so the number is higher than 10 and lower than 10 
	cout << "Please enter a number greater than 10: ";
	cin >> intHigherNumber;
	cout << "Please enter a number less than 10: ";
	cin >> intLowerNumber;

	intTotal = intHigherNumber - intLowerNumber;

	cout << "Total: " << intTotal
		<< " if you take the higher number "
		<< intHigherNumber
		<< " and subtract "
		<< intLowerNumber
		<< "." << endl;
    return 0;
}

