#include "room.h"
#include <iostream>
using namespace std;

Room::Room()
{
	isVIP=false;
	noRows=0;
	noOfSeatsPerRow=nullptr;

	
}

Room::Room (bool isVIP, int noRows, int* noOfSeatsPerRow) {
	if (isVIP == true)
		this->roomIsVIP();
	this->setNoRows(noRows);
	this->setNoOfSeatsPerRow(noOfSeatsPerRow, noRows);
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

int Room:: totalNoOfSeatsInTheRoom() {
	int sum = 0;
	for (int i = 0; i < this->noRows; i++)
	{
		sum += this->noOfSeatsPerRow[i];
	}

	return sum;

}
void Room:: addRow(int noSeats) {
	int* newArray = new int[this->noRows+1];
	for (int i = 0; i < this->noRows; i++)
	{
		newArray[i] = this->noOfSeatsPerRow[i];
	}
	newArray[this->noRows] = noSeats;
	this->noRows++;

	delete[] this->noOfSeatsPerRow;
	this->noOfSeatsPerRow = newArray;
}
Room Room:: operator++(int)
{
	Room copy = *this;
	this->addRow(noOfSeatsPerRow[noRows - 1]);
	return copy;
}
bool Room::operator!=(Room& room) {
	if (this->noRows != room.noRows)
		return true;
	else
		return false;

}
Room::Room(const Room& object) {
	this->isVIP = object.isVIP;
	this->noRows = object.noRows;
	this->noOfSeatsPerRow = new int[object.noRows];
	for (int i = 0; i < object.noRows; i++)
		this->noOfSeatsPerRow[i] = object.noOfSeatsPerRow[i];
}


Room::~Room()
{
	if (this->noOfSeatsPerRow != nullptr)
		delete[] this->noOfSeatsPerRow;
}

void operator<<(ostream& console, Room& room) {
	console << "The Room data is:";
	if (room.isVIP == true)
		console << endl << "Room is VIP";
	else console << endl << "Room is not VIP";
	console << endl << "Number of Rows:" << room.getNoRows();
	console << endl << "";
	if(room.getNoRows()>0)
	{
		int* copy = room.getNoOfSeatsPerRow();
		for (int i = 0; i <room.getNoRows(); i++)
		{
			console << "Row " << i+1 << " has " << copy[i] << " seats"<<endl;
		}
	}
}
void operator>>(istream& console, Room& room) {
	cout << "Please introduce the room data!";
	cout << endl << "Is room VIP?(0-no, 1-yes): ";
		console >> room.isVIP;
		cout << endl << "Number of Rows:";
		console >> room.noRows;
		delete[] room.noOfSeatsPerRow;
		room.noOfSeatsPerRow = new int[room.noRows];
		for (int i = 0; i < room.noRows; i++)
		{
			cout << "Row " << i + 1 << ":";
			console >> room.noOfSeatsPerRow[i];

		}


}

int Room::MIN_NO_OF_ROWS = 3;
int Room::MAX_NO_OF_ROWS = 15;