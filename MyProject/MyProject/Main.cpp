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
	Ticket movie2((char*)"Maria Tudor", 11, 6, 20, STUDENT);
	Ticket movie3;
	//cin >> movie3;
	//cout << movie3;
	
	// Output ticket information
	//cout << movie 
	//cout<< endl;
	//cout << movie2;
	//cout<< endl;

	// Perform ticket operations
	//movie.discount(10);
	//cout << "After applying a discount:" << endl;
	//cout << movie
	//cout<< endl;

	//movie.giveTicketToSomeoneElse((char*)"Norris Mircescu");
	//cout << "After giving the ticket to someone else:" << endl;
	//cout << movie 
	//cout<< endl;

	//Compare tickets
	/*if (movie <= movie2) {
		cout << "The person with ticket " << movie.getId();
		cout << "sits in front or in the same row as the person with ticket ";
		cout << movie2.getId();
	}
	else
		cout << " The person with ticket " << movie2.getId();
		cout << "sits in front of the person with ticket " 
		cout<< movie.getId();*/

	//movie - 3;
	//cout << movie;

	Event film("Napoleon", "10:45", "10.12.2019", 10);
	//Event film;
	//cin >> film;
	film = film + 4;
	cout << film;
	
}

