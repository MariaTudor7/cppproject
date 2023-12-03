#pragma once
#include< iostream>
using namespace std;

class Room {
private:
	bool isVIP;
	int noRows;
	int* noOfSeatsPerRow;
	
	
public:
	//static attributes
	static int MIN_NO_OF_ROWS;
	static int MAX_NO_OF_ROWS;

public:
	//constructors
	Room();
	Room(bool isVip, int noRows, int* noOfSeatsPerRow);
	//getters
	bool isRoomVIP();
	int getNoRows();
	int* getNoOfSeatsPerRow();

	//setters-add validation
	void roomIsVIP();
	void setNoRows(int noRows);
	void setNoOfSeatsPerRow(const int* noOfSeatsPerRow, int noRows);

	//constrctors
	//Room();
	//Room(bool isVIP, int noRows, int* noOfSeatsPerRow);

	//copy constructor
	Room(const Room& object);


	//destructor
	~Room();
	//
	int totalNoOfSeatsInTheRoom();
	void addRow(int row);
	//overloading ++(postincrementation)
	Room operator++(int);
	bool operator!=(Room& room);
	friend void operator<<(ostream& console, Room& room);
	friend void operator>>(istream& console, Room& room);
};

//overloading << and >>
void operator<<(ostream& console, Room& room);
void operator>>(istream& console, Room& room);