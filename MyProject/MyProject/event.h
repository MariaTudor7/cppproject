#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Month {
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};
class Event {
private:
	string eventName;
	Month month;
	//string time;
	//string date;
	//int noEvents;
	int noSeats;
	int* seatTaken;
public:
	//gettters
	string getEventName();
	int getNoSeats();
	int* getSeatTaken();
	Month getMonth();

	//setters
	void setEventName(string eventName);
	void setNoSeats(int noSeats);
	void setSeatTaken(int* seatTaken);

};
