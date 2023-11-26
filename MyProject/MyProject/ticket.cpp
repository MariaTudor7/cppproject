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
	category=CategoryType::NORMAL;
	
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

string Ticket::getCategoryName()
{
	switch (this->category) {
	case VIP:
		return "VIP";
	case NORMAL:
		return "Normal";
	case STUDENT:
		return "Student";
	case DISABILITY:
		return "Disability";
	case PROMO:
		return "Promo";
	}
}

//setters

void Ticket::setId(const char* id) {
	
	if (this->id != nullptr) {
		delete[] this->id;
	}

	if (id != nullptr && strlen(id) == 8)
	{
		this->id = new char[strlen(this->id) + 1];
		strcpy_s(this->id, 8, id);
	}
	else
	{
		this->id=nullptr;
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


void Ticket::setPrice(float price) {
	if (price >= 20 && price <= 110)
		this->price = price;
	else
		throw exception("Wrong price");
}

Ticket::~Ticket() {
	if (this->id != nullptr)
		delete[] this->id;
}