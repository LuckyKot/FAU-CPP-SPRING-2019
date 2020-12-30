
#ifndef TIME_H
#define TIME_H

// the Time class type
class Time
{
public:
	Time();
	Time(int hours, int minutes, char indicator);
	int getHours() const;
	int getMinutes() const;
	int getAMPM() const;
	void setTime(int hours, int minutes, char indicator);
	~Time();
private:
	int * hours = new int;
	int minutes;
	char indicator;
};


#endif