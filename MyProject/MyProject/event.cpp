#include "event.h"
#include <iostream>
using namespace std;

Event::eventName() {
	event_name="";
	//string time;
	//string date;
	//int noEvents;
	 noSeats=0;
	seatTaken=nullptr;
}

//getters-incomplet
string Event::getEventName() {
	return this->eventName;
}

int Event::getNoSeats(){
	return this->noSeats;
}

int* Event::getSeatTaken()
{
	int* copySeat;
	for (int i = 0; i < this->noSeats; i++)
		copySeat[i] = this->seatTaken[i];
	return copySeat;
}


