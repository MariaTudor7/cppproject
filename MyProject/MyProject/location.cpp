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

void Location::setAdress(const char* adress)
{
	if(this->adress!=nullptr)
	{
		delete[]this->adress;
	}
	if (adress != nullptr)
	{
		this->adress = new char[strlen(adress) + 1];
		strcpy_s(this->adress, strlen(adress)+1, adress);
	}
	else
		throw exception("wrong adress");
}

Location::~Location()
{
	if (this->adress != nullptr)
		delete[] this->adress;
}
