/*
By --
April 14, 2019 - COP 3014
Program that implements the requirements of homework 9
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
Time::Time(const Time &org) : minutes(org.minutes), AM_PM(org.AM_PM)
{
	hours = new int;
	*hours = *org.hours;
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
// Implement the assignment overloaded operator member function for the Time class. Ensure no 
// shallow copies are made. Check for self-assignment. After the assignment, the lefthand side 
// object should contain the same values as the righthand side object. Ensure the return value 
// is correct.
const Time & Time::operator= (const Time old) {
	delete hours;
	hours = new int;
	*hours = *old.hours;
	minutes = old.minutes;
	AM_PM = old.AM_PM;
	return(*this);
}





// Implement an overloaded operator function that implements the equality (==)
// operator. This function is a member function of the Time class. The input parameter
// will be a Time object and declared as a const reference variable. This member function
// will be declared as a const member function. This function will compare 
// two Time objects. If the hours, minutes and AM/PM are the same between the two
// objects then return an integer 1, otherwise return an integer 0.
int Time::operator==(const Time old ) {
	if (*hours==*old.hours && minutes==old.minutes && AM_PM==old.AM_PM) {
		return 1;
	}
	else {
		return 0;
	}
}





// Implement an overloaded operator function that implements the addition (+)
// operator. This function is a non-member and non-friend function. This function will have two
// input parameters. The first input parameter is a const reference variable of type Time.
// The second input parameters is an integer value. 
// The second input parameter will represent minutes to add to the Time 
// object (the first input parameter). The second input parameter will range from 0 to 59. 
// If the second input parameter is out of range then default it to 0.
// This function will return by value a Time object with the appropriate minutes added.
Time operator+(const Time old, int add) {
	Time newTime;
	int newMin;
	int newHours;
	char newAMPM;
	if (add > 59 || add < 0) {
		add = 0;
	}
	newMin = old.getMinutes();
	newHours = old.getHours();
	newAMPM = old.getAMPM();
	newMin += add;
	if (newAMPM == 'A') {
		if (newMin >= 60) {
			if (newHours < 12) {
				newHours += 1;
				newHours -= 12;
				newMin -= 60;
				newAMPM = 'P';
			}
			else if (newHours >= 12) {
				newHours += 1;
				newHours -= 12;
				newMin -= 60;
			}
		}
	}
	else if (newAMPM == 'P') {
		if (newMin >= 60) {
			if (newHours < 12) {
				newHours += 1;
				newHours -= 12;
				newMin -= 60;
				newAMPM = 'A';
			}
			else if (newHours >= 12) {
				newHours += 1;
				newHours -= 12;
				newMin -= 60;
			}
		}
	}

	newTime.setTime(newHours,newMin,newAMPM);
	return newTime;
}





// Implement the friend function getTimeString().
// The getTimeString() has 2 input input parameters.
// The first input paramenter is a const reference variable of type Time.
// The second input paramenter is a reference variable of type std::ostream
// This function returns a std::string type.
// This function will return the time of the first input paramenter object
// in string format as follows:  hours:minutes AM
// There must be a leading zero for hours and minutes if there is a single digit. 
// Example 5 hours, 23 minutes and PM will be formatted as follows  "05:23 PM"
// Example 4 hours, 4 minutes and AM will be formatted as follows  "04:04 PM"
std::string getTimeString(const Time & t, std::ostream & out)
{
	std::string st;
	st = (*(t.hours) < 10 ? "0" : "") + std::to_string(*(t.hours)) + ":" + (t.minutes < 10 ? "0" : "") + std::to_string(t.minutes) + " " + t.AM_PM + "M";
	return st;
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
void countZeros(int h, int m, char AP, int & zeroCount)
{
	zeroCount = 0;  // initialize zeroCount
	Time t(h, m, AP);  // create the Time object
	std::string str = getTimeString(t, std::cout);
	for (unsigned i = 0; i < str.length(); i++)
	{
		if (str[i] == '0')
		{
			zeroCount++;
		}
	}
}
