#pragma once
#include <iostream>
#include <string>
//#include <random>
using namespace std;

class Ticket {
private:
	char* id;
	string firstNameLastName;
	int row;
	int seat;
	//add type (VIP, NORMAL)
	//add type price (student, VIP, NORMAL, )

public:
	//getters
	char* getId();
	//float getPrice();
	string getName();
	int getRow();
	int getSeat();

//setters
	void setId(const char* id);
	void setPrice(float price);
	void setName(string name);
	void setRow(int row);
	void setSeat(int seat);

};
