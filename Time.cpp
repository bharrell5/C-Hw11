#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;

}

Time::Time(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)
		hour = h;
	else
		hour = 0;
}

void Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)
		minute = m;
	else
		minute = 0;
}

void Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)
		second = s;
	else
		second = 0;
}

int Time::getHour()
{
	return hour;
}

void Time::print()
{
	cout << setfill('0') << setw(2)
		<< ((hour == 0 || hour == 12) ? 12 : hour % 12) 
		<< ":" << setw(2) << minute << ":" << setw(2) << second
		<< (hour < 12 ? " am" : " pm");
}

void Time::printMilitary()
{
	cout << setfill('0') << setw(2) << hour << setw(2) << minute;
}