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
	//getters
	bool isRoomVIP();
	int getNoRows();
	int* getNoOfSeatsPerRow();

	//setters-add validation
	void roomIsVIP();
	void setNoRows(int noRows);
	void setNoOfSeatsPerRow(const int* noOfSeatsPerRow, int noRows);

	//constrctors
	Room();


	//destructor
	~Room();

	

};