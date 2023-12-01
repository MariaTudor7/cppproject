#include "ticket.h"
#include "event.h"
#include "room.h"
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	//constructors implementation
	Ticket Movie((char*)"Catalina Catoiu", 10, 4, 30.5,  VIP);
	cout << Movie;
	Ticket movie2;
	cin >>movie2;
	cout << movie2;
}
