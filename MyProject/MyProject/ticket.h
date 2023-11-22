#pragma once
#include <iostream>
#include <string>
//#include <random>
using namespace std;

class Ticket {
private:
	char* id;
	float price;
	string firstNameLastName;
	int row;
	int seat;
	//add type (VIP, NORMAL)

public:
	//getters
	char* getId();
	float getPrice();
	string getName();
	int getRow();
	int getSeat();



};
