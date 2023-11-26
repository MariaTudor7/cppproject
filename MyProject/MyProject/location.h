#pragma once
#include <iostream>
using namespace std;

class Location {
private:
	char* adress; //dynamically allocated vector of characters,
	

public:

	Location();
	//getter


	char* getAdress();

	//setter

	void setAdress(const char* adress);

	//destructor
	~Location();

	
    
};
