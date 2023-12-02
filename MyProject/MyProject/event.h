#pragma once
#include <iostream>
#include <string>
using namespace std;

class Event {
private:
	std:: string eventName;
	std::string time;
	std::string date;
	int noAppearances;
	

public:
	//static attributes
	static int MIN_NO_OF_APPEARANCES;
	
public:
	//gettters
	std::string getEventName();
	std::string getTime();
	std::string getDate();
	int getNoAppearances();


	//setters
	void setEventName(std::string eventName);
	void setTime(std::string time);
	void setDate(std::string date);
	void setNoAppearances(int noAppearances);
	
	//constructor
	Event();
	Event(std::string eventName, std::string time, std::string date, int noAppearances);
	//copy constructor
	Event(const Event& object);
	//destructor
	~Event();
	//overloading operator +
	Event operator+(int addAppearance);
	Event operator=(Event event);
	friend void operator>>(istream& console, Event& event);
};

//overloading << and >>
void operator<<(ostream& console, Event& event);
void operator>>(istream& console, Event& event);
