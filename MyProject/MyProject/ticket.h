#pragma once
#include <iostream>
#include <string>
//#include <random>
using namespace std;

enum CategoryType { VIP = 1, PROMO, NORMAL, STUDENT, DISABILITY };


class Ticket {
private:
	char* id;
	string firstNameLastName;
	int row;
	int seat;
	float price;
	CategoryType category;

public:
	//static attributes
	static int MIN_NO_OF_SEATS;
	static int MAX_NO_OF_SEATS;
	static int MIN_NO_OF_ROWS;
	static int MAX_NO_OF_ROWS;
	static int LENGHT_OF_ID;
	static int MIN_PRICE;
public:
	//getters
	char* getId();
	float getPrice();
	string getName();
	int getRow();
	int getSeat();
	string getCategoryName();



//setters
	void setId(const char* id);
	void setPrice(float price);
	void setName(string name);
	void setRow(int row);
	void setSeat(int seat);

	//destructor
	~Ticket();

	
};
