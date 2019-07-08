#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	double netBalance, payment, d1, d2, averageDailyBalance, interestPerMonth, interest;
	
	cout << "Enter net balance: ";
	cin >> netBalance;
	
	cout << "Enter payment made: ";
	cin >> payment;
	
	cout << "Enter number of days in the billing cycle: ";
	cin >> d1;
	
	cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> d2;
	
	cout << "Enter interest rate per month: ";
	cin >> interestPerMonth;
	
	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interest = (averageDailyBalance * interestPerMonth);
	
	cout << endl << "Interest: " << interest;
	
	getch();
	return 0;
}
