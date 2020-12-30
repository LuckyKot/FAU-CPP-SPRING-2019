
#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>

// the Time type
class Time
{
public:
	// Constructors
	Time();
	Time(int hours, int minutes, char AM_PM);
	Time(const Time &org); // copy constructor
	// Destructor
	~Time();

	// accessors
	int getHours() const;
	int getMinutes() const;
	char getAMPM() const;
	friend std::string getTimeString(const Time & t, std::ostream &out);

	// mutators
	void setTime(int hours, int minutes, char AM_PM);
	// overloaded operators member functions go here
	const Time & operator= (const Time old);
	int operator==(const Time old);
	

private:
	// member variables
	int *hours;
	int minutes;
	char AM_PM;
};
void countZeros(int h, int m, char AP, int & zeroCount);

// non-member operator overloads go here
Time operator+(const Time old, int add);

#endif