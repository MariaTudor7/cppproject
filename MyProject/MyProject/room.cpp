#include "room.h"
#include <iostream>
using namespace std;

Room::Room()
{
	isVIP=false;
	noRows=0;
	noOfSeatsPerRow=nullptr;

	
}

Room::Room (bool isVip, int noRows, int* noOfSeatsPerRow) {
	this->isRoomVIP(isVip);
}

//getters-incomplete
bool Room::isRoomVIP()
{
	return this->isVIP;
}

int Room::getNoRows()
{
	return this->noRows;
}


//review this function
int* Room::getNoOfSeatsPerRow()
{
	int* copy=new int[this->noRows];
	for (int i = 0; i <this-> noRows; i++)
		copy[i] = this->noOfSeatsPerRow[i];
	return copy;

}

//setters
void Room::roomIsVIP()
{
	this->isVIP = true;
}

void Room::setNoRows(int noRows)
{
	if (noRows >= MIN_NO_OF_ROWS && noRows <= MAX_NO_OF_ROWS) {
		this->noRows = noRows;
	}
	else {
		throw exception("Wrong value for age");
	}

}

void Room::setNoOfSeatsPerRow(const int* noOfSeatsPerRow, int noRows)
{
	
		delete[] this->noOfSeatsPerRow;
	
	if (noOfSeatsPerRow == nullptr)
	{
		throw exception("noOfSeatsPerRow missing");
	}
	else
	{
		this->noOfSeatsPerRow = new int[noRows];
		for (int i = 0; i < noRows; i++) {

			this->noOfSeatsPerRow[i] = noOfSeatsPerRow[i];
		}
	}
	
	
}


Room::~Room()
{
	if (this->noOfSeatsPerRow != nullptr)
		delete[] this->noOfSeatsPerRow;
}


int Room::MIN_NO_OF_ROWS = 3;
int Room::MAX_NO_OF_ROWS = 15;