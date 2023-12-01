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
	//static attributes
	static int MIN_NO_OF_SEATS;
	static int OCCUPIED;
	static int FREE;
public:
	//gettters
	string getEventName();
	int getNoSeats();
	int* getSeatTaken();
	Month getMonth();

	//setters
	void setEventName(string eventName);
	void setNoSeats(int noSeats);
	void setSeatTaken(const int* seatTaken, int noSeats);
	
	//constructor
	Event();

	//destructor
	~Event();
};
