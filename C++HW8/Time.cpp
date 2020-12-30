/*
By --
March 30, 2019 - COP 3014
Program that implements the requirements of homework 7
*/
#include "Time.h"
#include <new>
#include <string>
#include <iostream>

// The class name is Time. This defines a class for keeping time in hours, minutes, and AM/PM indicator.
// You should create 3 private member variables for this class. An integer variable for the hours,
// an integer variable for the minutes, and a char variable for the AM/PM indicator. The hours variable
// must use dynamic memory allocation. The hours range from 1 to 12, the minutes range from 0 to 59,
// and the AM / PM indicator is either 'A' or 'P'.

// Create a default constructor that will initialize the time of an object to 12:00 AM.
// Use the initializer list for at least one of the variables.
Time::Time() : minutes(0), AM_PM('A')
{
	hours = new int;
	*hours = 12;
}
// Create a constructor with 3 input parameters. The input parameters are an int for the
// hours, an int for the minutes, and a char for the AM indicator. The input paramters must be
// boundary checked. The hours range from 1 to 12. If the input is out of range then default
// to 12. The minutes are from 0 to 59. If the minutes are out of range then default to 0.
// The AM indicator is either 'A' or 'P'. If the AM indicator is out of range then default to 'A'.
// You should use the setTime() public function for this constructor.
Time::Time(int h, int m, char AP)
{
	hours = new int;
	setTime(h, m, AP);
}
// Copy constructor implementation
// The copy constructor must use the initializer list for at least one member variable
// The copy constructor will copy the values of all member functions from the input
// object without creating any shallow copies
Time::Time(const Time& old) : minutes(old.minutes) {
	hours = new int(*old.hours);
	AM_PM = old.AM_PM;
}




// Implement the destructor for this class
Time::~Time()
{
	delete hours;
}
// Implement the getHours() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns an int as the hours of the object.
int Time::getHours() const
{
	return *hours;
}
// Implement the getMinutes() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns an int as the minutes of the object.
int Time::getMinutes() const
{
	return minutes;
}
// Implement the getAMPM() public member function.
// This function has no input parameters.
// This function is a const function.
// This function returns a char as the AM or PM of the object.
char Time::getAMPM() const
{
	return AM_PM;
}
// Implement the set() private member function.
// This function has 3 input input parameters.
// This function returns a void.
// The input parameters are an int for the
// hours, an int for the minutes, and a char for the AM indicator. The input paramters must be
// boundary checked. The hours range from 1 to 12. If the input is out of range then default
// to 12. The minutes are from 0 to 59. If the minutes are out of range then default to 0.
// The AM indicator is either 'A' or 'P'. If the AM indicator is out of range then default to 'A'.
void Time::setTime(int h, int m, char AP)
{
	if (h >= 1 && h <= 12)
	{
		*hours = h;
	}
	else
	{
		*hours = 12;
	}
	if (m >= 0 && m <= 59)
	{
		minutes = m;
	}
	else
	{
		minutes = 0;
	}
	if (AP == 'A' || AP == 'P')
	{
		AM_PM = AP;
	}
	else
	{
		AM_PM = 'A';
	}
}
// Implement the friend function getTimeString().
// The getTimeString() has 1 input input parameter.
// The first input paramenter is a const reference variable of type Time.
// This function returns a std::string type.
// This function will return the time of the first input paramenter object
// in string format as follows:  hours:minutes AM
// You cannot use the getHours(), getMinutes(), or getAMPM() member functions for this function.
// There must be a leading zero for hours and minutes if there is a single digit. 
// Example 5 hours, 23 minutes and PM will be formatted as follows  "05:23 PM"
// Example 4 hours, 4 minutes and AM will be formatted as follows  "04:04 PM"

std::string getTimeString(Time ref) {
	std::string time;
	int temp;
	if (*ref.hours < 10 && ref.minutes<10) {
		time = '0';
		temp = *ref.hours;
		time += std::to_string(temp);
		time += ':';
		time += '0';
		temp = ref.minutes;
		time += std::to_string(temp);
		time += ' ';
		if (ref.AM_PM == 'A') {
			time += "AM";
		}
		else {
			time += "PM";
		}
		return time;
	}
	if (*ref.hours >10 && ref.minutes<10) {
		temp = *ref.hours;
		time += std::to_string(temp);
		time += ':';
		time += '0';
		temp = ref.minutes;
		time += std::to_string(temp);
		time += ' ';
		if (ref.AM_PM == 'A') {
			time += "AM";
		}
		else {
			time += "PM";
		}
		return time;
	}
	if (*ref.hours < 10 && ref.minutes > 10) {
		time = '0';
		temp = *ref.hours;
		time += std::to_string(temp);
		time += ':';
		temp = ref.minutes;
		time += std::to_string(temp);
		time += ' ';
		if (ref.AM_PM == 'A') {
			time += "AM";
		}
		else {
			time += "PM";
		}
		return time;
	}
	if (*ref.hours > 10 && ref.minutes > 10) {
		temp = *ref.hours;
		time += std::to_string(temp);
		time += ':';
		temp = ref.minutes;
		time += std::to_string(temp);
		time += ' ';
		if (ref.AM_PM == 'A') {
			time += "AM";
		}
		else {
			time += "PM";
		}
		return time;
	}
}


// The non-member (and non-friend) function countZeros() has 4 input parameters.
// The first input parameter h is an integer and represents the hours for the time.
// The second input parameter m is an integer and represents the minutes for the time.
// The third input parameter AP is a char and represents the AM or PM (either 'A' or 'P').
// The fourth input parameter zeroCount is an integer reference variable.
// The function countZeros should create a Time object using the first 3 input parameters.
// Then the function countZeros will use the getTimeString function to get the character
// string of the time that was created. Then the function countZeros will count the number
// of '0' (zero) characters that are in the character string. The count is saved in the 
// reference variable zeroCount. The countZeros function prototype will be placed in the
// Time.h file and is a non-member function and is not a friend function.
void countZeros(int h, int m, int AP, int &ref) {
	Time time;
	std::string clock;
	ref = 0;
	int length;
	time.setTime(h , m , AP);
	clock = getTimeString(time);
	length = clock.size();
	for (int i = 0; i < length; i++) {
		if (clock[i] == '0') {
			ref++;
		}
	}
}