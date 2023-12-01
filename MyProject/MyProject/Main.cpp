#include "ticket.h"
#include "event.h"
#include "room.h"
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	//constructors implementation
	Ticket movie((char*)"Catalina Catoiu", 10, 4, 30.5,  VIP);
	
	//Ticket movie2;
	//cin >>movie2;
	//cout << movie2;
	movie.discount(10);
	cout << movie;
	movie.giveTicketToSomeoneElse((char*)"Norris Mircescu");
	cout << movie;
}
