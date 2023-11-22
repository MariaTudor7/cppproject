#pragma once
#include< iostream>
using namespace std;

class Room {
private:
	bool isVIP;
	int noRows;
	int* noOfSeatsPerRow;
	

public:
	//getters
	bool isRoomVIP();
	int getNoRows();
	int* getNoOfSeatsPerRow();

	//setters-add validation
	void roomIsVIP();
	void setNoRows(int noRows);
	void setNoOfSeatsPerRow();

	
};