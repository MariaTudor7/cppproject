#pragma once
#include <iostream>
#include <string>
using namespace std;

class Event {
private:
	string eventName;
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
};