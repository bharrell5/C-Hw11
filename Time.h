#ifndef TIME_H
#define TIME_H

class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time();
	Time(int h, int m = 0, int s = 0);
	void setTime(int h, int m, int s);
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	int getHour();
	void print();
	void printMilitary();


};

#endif