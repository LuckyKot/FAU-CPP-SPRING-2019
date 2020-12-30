/*
By --
March 30, 2019 - COP 3014
Program that implements the requirements of homework 7
*/
#include "Time.h"
#include <new>

// The class name is Time. This defines a class for keeping time in hours, minutes, and AM/PM indicator.
// You should create 3 private member variables for this class. An integer variable for the hours,
// an integer variable for the minutes, and a char variable for the AM/PM indicator. The hours variable
// MUST use dynamic memory allocation. The hours range from 1 to 12, the minutes range from 0 to 59,
// and the AM / PM indicator is either 'A' or 'P'.

// Create a public default constructor that will initialize the time of an object to 12:00 AM.
// Use the initializer list for at least one of the variables.

Time::Time() : minutes(0) {
	hours = new int(12);
	indicator = 'A';
}


// Create a public constructor with 3 input parameters. The input parameters MUST be 
// in the following order and are an int for the hours,
// an int for the minutes, and a char for the AM indicator. The input paramters must be
// boundary checked. The hours range from 1 to 12. If the input is out of range, then default
// to 12. The minutes are from 0 to 59. If the minutes are out of range then default to 0.
// The AM indicator is either 'A' or 'P'. If the AM indicator is out of range then default to 'A'.
// You should use the setTime() public member function for this constructor.


Time::Time(int hours, int minutes, char indicator) {
	Time::setTime(hours, minutes, indicator);
}

// Implement the destructor for this class here

Time::~Time() {
	delete hours;
}


// Implement the getHours() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns an int which represents the hours of the object.

int Time::getHours() const{
	return *Time::hours;
}

// Implement the getMinutes() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns an int which represents the minutes of the object.

int Time::getMinutes() const{
	return Time::minutes;
}


// Implement the getAMPM() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns a char which represents AM or PM of the object.

int Time::getAMPM() const{
	return Time::indicator;
}



// Implement the setTime() public member function.
// This function has 3 input input parameters.
// This function returns a void.
// The input parameters MUST be in the following order and are an int for the
// hours, an int for the minutes, and a char for the AM indicator. The input paramters must be
// boundary checked. The hours range from 1 to 12. If the input is out of range then default
// to 12. The minutes are from 0 to 59. If the minutes are out of range then default to 0.
// The AM indicator is either 'A' or 'P'. If the AM indicator is out of range then default to 'A'.

void Time::setTime(int hours, int minutes, char indicator) {
	if (hours >= 0 && hours<=12) {
		Time::hours = new int(hours);
	}
	else {
		Time::hours = new int(12);
	}
	if (minutes < 0 || minutes>59) {
		Time::minutes = 0;
	}
	else {
		Time::minutes = minutes;
	}
	if (indicator == 181 || indicator == 80) {
		Time::indicator = indicator;
	}
	else {		
		Time::indicator = 'A';
	}
}




