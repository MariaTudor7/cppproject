#include "event.h"
#include <iostream>
using namespace std;

Event::Event() {
	eventName="";
	//string time;
	//string date;
	//int noEvents;
	 noSeats=0;
	seatTaken=nullptr;
	month = Month::JANUARY;
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
Month Event::getMonth() {
	return this->month;
}

//setters

void Event::setEventName(string eventName)
{
	//validation
	this->eventName = eventName;
}

void Event::setNoSeats(int noSeats) {

	//add validation
	this->noSeats = noSeats;
}

void Event::setSeatTaken(int* seatTaken) {
	if (this->seatTaken != nullptr) {
		delete[] this->seatTaken;
	}
	
	if (seatTaken != nullptr)
	{
		this->seatTaken = new int[this->noSeats];
		for (int i = 0; i < this->noSeats; i++)
		{
			this->seatTaken[i] = seatTaken[i];
		}
	}
	    else 
	    {
		this->seatTaken = nullptr;
	    }
	
}
Event::~Event() {
	if (this->seatTaken != nullptr) {
		delete[] this->seatTaken;
	}
}



