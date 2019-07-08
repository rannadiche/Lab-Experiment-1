#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int ticketPrice, ticketsSold1, ticketsSold2, ticketsSold3, ticketsSold4, sales;
	
	cout << "Ticket Price\t" << "No. of Tickets Sold" << endl << endl;

	cout << "$250\t\t";
	cin >> ticketsSold1;
	
	cout << endl << "$100\t\t";
	cin >> ticketsSold2;
	
	cout << endl << "$50\t\t";
	cin >> ticketsSold3;
	
	cout << endl << "$25\t\t";
	cin >> ticketsSold4;
	
	sales = (ticketsSold1 * 250) + (ticketsSold2 * 100) + (ticketsSold3 * 50) + (ticketsSold4 * 25);
	
	
	cout << endl << "Total Sales: " << sales;
	
	getch();
	return 0;
}
