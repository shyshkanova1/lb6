#include <iostream> 
#include <iomanip> 
#include "windows.h"

#define N 10

using namespace std;

int main()
{
	int i;
	int a[N];
	int geom = 1;
	int n = 0;
	char action;

	cout << "If you want to fill array automatically press Y or any other char for manual: ";
	cin >> action;

	if (action == 'Y' or action == 'y')
	{
		srand(time(NULL)); 		

		cout << "Random array: ";

		for (i = 0; i < N; i++)
		{
			a[i] = rand() % 51 - 25; 
			cout << setw(5) << a[i]; 
		}
		cout << endl;

	}
	else
	{
		cout << "Enter array: " << endl;

		for ( i = 0; i < N; i++)
		{
			cout << "array[" << i << "]=";
			cin >> a[i];
		}
	}

	cout << "Fitting elements: ";

	for ( i = 0; i < N; i++)
		if (a[i] > 0 && a[i] % 2 == 0)
		{
			cout << setw(5) << a[i];

			geom *= a[i];

			n++;
		}

	cout << endl;

	if (n != 0)
		cout << "Result: " << pow(geom, 1.0 / N) << endl;
	else
		cout << "Cannot calculate for current data" << endl;
    
	return 0;
}
