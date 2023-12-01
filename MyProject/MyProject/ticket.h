#pragma once
#include <iostream>
#include <string>
//#include <random>
using namespace std;

enum CategoryType { VIP = 1, PROMO, NORMAL, STUDENT, DISABILITY };


class Ticket {
private:
	const int id;
	char* firstNameLastName;
	int row;
	int seat;
	float price;
	CategoryType category;
	static int ID_VALUE;

public:
	//static attributes
	static int MIN_NO_OF_SEATS;
	static int MAX_NO_OF_SEATS;
	static int MIN_NO_OF_ROWS;
	static int MAX_NO_OF_ROWS;
	static int MIN_PRICE;
public:
	//getters
	int getId();
	float getPrice();
	char* getName();
	int getRow();
	int getSeat();
	string getCategoryName();



//setters
	void setPrice(float price);
	void setName(char* name);
	void setRow(int row);
	void setSeat(int seat);
	void setCategory(CategoryType category);

//constructor
	Ticket();
	Ticket(char* name, int row, int seat, float price, CategoryType category);
	Ticket(const Ticket& object);
//destructor
	~Ticket();

	friend void operator>>(istream& console, Ticket& ticket);
	
};

//overloading << and >>
void operator<<(ostream& console, Ticket& ticket);
void operator>>(istream& console, Ticket& ticket);