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
	int* copySeat=new int[this->noSeats];
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
    
	this->eventName = eventName;
}



void Event::setNoSeats(int noSeats) {

	if (noSeats > MIN_NO_OF_SEATS)
		this->noSeats = noSeats;
	else
		throw exception("Too little seats");
}



void Event::setSeatTaken(const int* seatTaken, int noSeats) {


	if (this->seatTaken != nullptr) {
		delete[] this->seatTaken;
	}


	if (seatTaken == nullptr ) {
		throw exception("No seats");
	}
	else
	
	{
		this->seatTaken = new int[noSeats];
		for (int i = 0; i < noSeats; i++)
		{

			if (seatTaken[i] != OCCUPIED || seatTaken[i] != FREE)
				throw exception("Wrong seat value");
			this->seatTaken[i] = seatTaken[i];
		}
	}
	   
	
}
Event::~Event() {
	if (this->seatTaken != nullptr) {
		delete[] this->seatTaken;
	}
}

int Event::MIN_NO_OF_SEATS = 14;
int Event::OCCUPIED = 1;
int Event::FREE = 0;


