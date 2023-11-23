#include "room.h"
#include <iostream>
using namespace std;

Room::Room()
{
	isVIP=false;
	noRows=0;
	noOfSeatsPerRow=nullptr;
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
	int* copy;
	for (int i = 0; i < noRows; i++)
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
	if (noRows >= 3 && noRows <= 15) {
		this->noRows = noRows;
	}
	else {
		throw exception("Wrong value for age");
	}

}

void Room::setNoOfSeatsPerRow(int* noOfSeatsPerRow)
{
	if (this->noOfSeatsPerRow != nullptr)
	{
		delete[] this->noOfSeatsPerRow;
	}
	if (noOfSeatsPerRow != nullptr)
	{
		this->noOfSeatsPerRow = new int[this->noRows];
		for (int i = 0; i < this->noRows; i++) {
			this->noOfSeatsPerRow[i] = noOfSeatsPerRow[i];
		}
	}
	else
	{
		this->noOfSeatsPerRow = nullptr;
	}
	
}
