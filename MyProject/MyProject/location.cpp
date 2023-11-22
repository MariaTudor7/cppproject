#include "location.h"
#include <iostream>
using namespace std;

Location::Location()
{
	adress = nullptr;
}

//getter-incomplete
char* Location::getAdress()
{
	char* adressCopy = new char[strlen(this->adress) + 1];
	strcpy_s(adressCopy, strlen(this->adress) + 1, this->adress);
	return adressCopy;
}


