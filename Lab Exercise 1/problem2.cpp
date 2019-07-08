#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double mass, density, volume;

	cout << "Enter mass: ";
	cin >> mass;
	cout << "Enter density: ";
	cin >> density;

	volume = (0.75 * mass) / density;
	
	cout << setprecision(2) << fixed << endl << "volume: = " << volume;

	getch();
	return 0;
}
