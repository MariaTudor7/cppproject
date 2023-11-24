#include "ticket.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;


Ticket::Ticket()
{
	id=nullptr;
	//price=0.0;
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

//setters

void Ticket::setId(const char* id) {
	
	if (id != nullptr && strlen(id) == 8)
	{

		strcpy_s(this->id, 8, id);
	}
	else
	{
		throw exception("Wrong id");
	}
}

void Ticket::setName(string name)
{

	this->firstNameLastName = name;
}

void Ticket::setRow(int row)
{
	if (row >= 3 && row <= 15)
		this->row = row;
	else
		throw exception("This row does not exist");
	
}
void Ticket::setSeat(int seat)
{
	if (seat >= 5 && seat <= 30)
		this->seat = seat;
	else
		throw exception("This seat does not exist");

}


void Ticket:: setPrice(float price) {
	if (price >= 20 && price <= 110)
		this->price = price;
	else
		throw exception("Wrong price");
}