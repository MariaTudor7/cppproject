#include "ticket.h"
#include "event.h"
#include "room.h"
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	//TICKET
	/*Ticket movieNapoleon((char*)"Catalina Catoiu", 10, 4, 30.5, VIP);
	movieNapoleon.discount(10);
	movieNapoleon.giveTicketToSomeoneElse((char*)"Nati Chivu");
	movieNapoleon - 3;//the price goes down with 3
	cout << movieNapoleon;
	Ticket movie2;
	cin >> movie2;
	//Compare tickets
	if (movieNapoleon <= movie2) {
		cout << "The person with ticket ";
		cout << movieNapoleon.getId();
		cout << "sits in front or in the same row as the person with ticket ";
		cout << movie2.getId();
	}
	else {
		cout << " The person with ticket ";
		cout << movie2.getId();
		cout << "sits in front of the person with ticket ";
		cout << movieNapoleon.getId();
	}*/




	//EVENT
	/*Event Napoleon("Napoleon", "10:45", "10.12.2019", 10);
	Napoleon.ChangeEventTime("11:00");
	Napoleon.AppearanceCanceled();//substracts 1 appearance
	Napoleon = Napoleon + 4; //adds 4 appearances of the movie
	cout << Napoleon;
	*/



	//ROOM
	int noSeats[] = { 10, 10, 11 };
    Room roomN(0, 3, noSeats); 
	roomN++;//adds a row with the same number of seats as the previous one
	cout << roomN;
	cout << "The total number of seats in the room is:";
    cout << roomN.totalNoOfSeatsInTheRoom();
	cout << endl;
	int noSeats2[] = { 11, 11, 12, 12 };
	Room room2(1, 4, noSeats2);
	if (roomN != room2)
	{
		cout << "The rooms do not have the same number of rows";
	}
	else{
		cout << "The rooms have the same number of rows";
	}
	
}

