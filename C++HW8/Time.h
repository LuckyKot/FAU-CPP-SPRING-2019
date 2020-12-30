
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
	Time(const Time &old);
	// Destructor
	~Time();

	// accessors
	int getHours() const;
	int getMinutes() const;
	char getAMPM() const;
	friend std::string getTimeString(Time ref);
	

	// mutators
	void setTime(int hours, int minutes, char AM_PM);
	

private:
	// member variables
	int *hours;
	int minutes;
	char AM_PM;
};

void countZeros(int h, int m, int AP, int &ref);

#endif