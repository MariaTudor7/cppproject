#include "ticket.h"
#include <iostream>
#include <string>
using namespace std;

Ticket::Ticket()
{
	id=nullptr;
	price=0.0;
    firstNameLastName="";
	row=0;
	seat=0;
}

//getters-incomplete

char* Ticket::getId()
{
	char* idCopy = new char[strlen(this->id) + 1];
	strcpy_s(idCopy, strlen(this->id) + 1, this->id);
	return idCopy;
}

float Ticket::getPrice()
{
	return this->price;
}

string Ticket::getName()
{
	return this->firstNameLastName;
}

int Ticket::getRow()
{
	return this->row;
}

int Ticket::getSeat()
{
	return this->seat;
}
