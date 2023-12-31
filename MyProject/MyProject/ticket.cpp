#include "ticket.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

//default constructor
Ticket::Ticket():id(ID_VALUE++)
{
	price=3;
    firstNameLastName=nullptr;
	row=1;
	seat=1;
	category=CategoryType::NORMAL;
}

Ticket::Ticket(char* name, int row, int seat,float price, CategoryType category ):id(ID_VALUE++) {
	this->setName(name);
	this->setRow(row);
	this->setSeat(seat);
	this->setCategory(category);
	this->setPrice(price);
}

//getters-incomplete

int Ticket::getId()
{
	return this->id;
}

float Ticket::getPrice()
{
	return this->price;
}

char* Ticket::getName()
{
	char* copyName=new char[strlen(this->firstNameLastName)+1];
	strcpy_s(copyName, strlen(this->firstNameLastName) + 1, this->firstNameLastName);
	return copyName;
}

int Ticket::getRow()
{
	return this->row;
}

int Ticket::getSeat()
{
	return this->seat;
}

CategoryType Ticket::getCategoryName()
{
	return this->category;
}

//setters

void Ticket::setName(char* name)
{
	if (name == nullptr)
		throw exception("Name does not exists");
	else {
		delete[] this->firstNameLastName;
		this->firstNameLastName = new char[strlen(name) + 1];
		strcpy_s(this->firstNameLastName, strlen(name) + 1, name);
	}
	
}

void Ticket::setRow(int row)
{
	if (row >= MIN_NO_OF_ROWS && row <= MAX_NO_OF_ROWS)
		this->row = row;
	else
		throw exception("This row does not exist");
	
}
void Ticket::setSeat(int seat)
{
	if (seat >= MIN_NO_OF_SEATS && seat <= MAX_NO_OF_SEATS)
		this->seat = seat;
	else
		throw exception("This seat does not exist");

}


void Ticket::setPrice(float price) {
	if (price >MIN_PRICE)
		this->price = price;
	else
		throw exception("Wrong price");
}

void Ticket::setCategory(CategoryType category) {
	this->category = category;
}

Ticket::~Ticket() {
	delete[] this->firstNameLastName;
	
}

//copy constructor
Ticket::Ticket(const Ticket& object):id(object.id) {
	this->category = object.category;
	this->price = object.price;
	this->row = object.row;
	this->seat = object.seat;
	this->firstNameLastName = new char[strlen(object.firstNameLastName) + 1];
	strcpy_s(this->firstNameLastName, strlen(object.firstNameLastName) + 1, object.firstNameLastName);
	this->price = object.price;
	Ticket::ID_VALUE++;
}


Ticket Ticket::discount(int procent)
{
	if (procent > 0 && procent < 100) {
		this->price = this->price - this->price * (procent / 100.0f);
		//this->category = PROMO;
	}
	return *this;
}

Ticket Ticket::giveTicketToSomeoneElse(char* otherPerson)
{
	delete[] this->firstNameLastName;
	this->firstNameLastName = new char[strlen(otherPerson) + 1];
	strcpy_s(this->firstNameLastName, strlen(otherPerson) + 1, otherPerson);
	return *this;
}

bool Ticket::operator<=(Ticket& ticket) {
	if (this->row <= ticket.row)
		return true;
	else
		false;
}

Ticket Ticket::operator-(float amount)
{
	this->price -= amount;
	return *this;
}


int Ticket:: MIN_NO_OF_SEATS = 1;
int Ticket::MAX_NO_OF_SEATS = 30;
int Ticket::MIN_NO_OF_ROWS = 1;
int Ticket::MAX_NO_OF_ROWS = 15;
int Ticket::MIN_PRICE = 3;
int Ticket::ID_VALUE = 1;



void operator<<(ostream& console, Ticket& ticket) {
	console << "The Ticket data is:";
	console << endl <<"ID:"<<ticket.getId();
	console << endl << "Name:" << ticket.getName();
	console << endl << "Row:" << ticket.getRow();
	console << endl << "Seat:" << ticket.getSeat();
	console << endl << "Category:";
	switch (ticket.category) {
	case VIP:
		console << "VIP";
		break;
	case NORMAL:
		console << "Normal";
		break;
	case STUDENT:
		console << "Student";
		break;
	case DISABILITY:
		console << "Disability";
		break;
	case PROMO:
		console << "Promo";
		break;
	}
	
	console << endl << "Price:" << ticket.getPrice();
	console << endl;
	 
}



void operator>>(istream& console, Ticket& ticket)
{
	cout << "Introduce ticket information!" << endl;

	cout << "Full name of ticket owner (firstName lastName):";
	string name;
	getline(console,name);
	delete[] ticket.firstNameLastName;
	ticket.firstNameLastName= new char[name.length() + 1];
	strcpy_s(ticket.firstNameLastName, name.length() + 1, name.c_str());

	cout << "Row:";
		console >> ticket.row;
		
    cout << "Seat:";
		console >> ticket.seat;
		
    cout << "Price:";
		console >> ticket.price;
		cout << "Ticket type (1 for VIP, 2 for NORMAL, 3 for STUDENT, 4 for DISABILITY, 5 for PROMO): ";
		int categoryInput;
		console >> categoryInput;

		// Validate categoryInput and then set category
		switch (categoryInput) {
		case 1:
			ticket.setCategory(VIP);
			break;
		case 2:
			ticket.setCategory(NORMAL);
			break;
		case 3:
			ticket.setCategory(STUDENT);
			break;
		case 4:
			ticket.setCategory(DISABILITY);
			break;
		case 5:
			ticket.setCategory(PROMO);
			break;
		default:
			cout << "Invalid ticket type. Setting to NORMAL." << endl;
			ticket.setCategory(NORMAL);
			break;
		}
}
			
	
	
	

