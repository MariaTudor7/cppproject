#include "event.h"
#include <iostream>
#include <string>
using namespace std;

Event::Event() {
	eventName="";
	time="";
	date="";
	noAppearances=0;

}
Event::Event(std::string eventName, std::string time, std::string date, int noAppearances){
	this->setEventName(eventName);
	this->setTime(time);
	this->setDate(date);
	this->setNoAppearances(noAppearances);
}
//getters-incomplet
string Event::getEventName() {
	return this->eventName;
}

string Event::getTime(){
	return this->time;
}
string Event::getDate() {
	return this->date;
}
int Event::getNoAppearances() {
	return this->noAppearances;
}

//setters

void Event::setEventName(string eventName)
{
    
	this->eventName = eventName;
}

void Event::setTime(string time) {
	this->time = time;
}
void Event::setDate(string date) {
	this->date = date;
}
void Event::setNoAppearances(int noAppearances) {
	if (noAppearances > MIN_NO_OF_APPEARANCES)
		this->noAppearances = noAppearances;
	else
		throw exception("Wrong value");
}
Event::Event(const Event& object) {
	this->eventName = object.eventName;
    this->time = object.time;
    this->date = object.date;
    this->noAppearances = object.noAppearances;

}
Event::~Event() {
	
}

Event Event:: operator+(int addAppearances) {

	this->noAppearances += addAppearances;
	return *this;

}
Event Event:: operator=(Event event) {
	this->eventName = event.eventName;
	this->time = event.time;
	this->date = event.date;
	this->noAppearances = event.noAppearances;
	return *this;

}

int Event::MIN_NO_OF_APPEARANCES = 0;

void operator<<(ostream& console, Event& event) {
	console << "The event data is:"<<endl;
	console<<"Event name:"<<event.getEventName()<<endl;
	console<<"Date:"<<event.getDate()<<endl;
	console<<"Time:"<<event.getTime()<<endl;
	console << "Number of appearances:" << event.getNoAppearances()<<endl;
}
void operator>>(istream& console, Event& event) {
	cout << "Please introduce data for the event!";
	cout << "Name:";
	console >> event.eventName;
	cout << "Date(dd.mm.yyy):";
	console >> event.date;
	cout << "Time(hh:mm):";
	console >> event.time;
	cout << "Number of appearances:";
	console >> event.noAppearances;
}


