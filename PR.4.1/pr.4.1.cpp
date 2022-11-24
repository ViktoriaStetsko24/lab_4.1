#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, i;
	double P;

	cout << "n = "; cin >> n;

	P = 1;
	i = 1;
	
	while (i <= 15)
	{
		P += sin(i)*sin(i)+cos(1./i)*cos(1./i)/i*i;
		i++;
	}
	cout << P << endl;

	P = 1;
	n = 1;
	do {
		P += sin(i)*sin(i)+cos(1./i)*cos(1./i)/i*i;
		i++;
	} while (i <= 15);
	cout << P << endl;

	P = 1;
	for (i=1; i <= 15; i++)
	{
		P += sin(i)*sin(i)+cos(1./i)*cos(1./i)/i*i;
	} 
	cout << P << endl;

	P = 1;
	for (i = 15; i >= 1; i--)
	{
		P += sin(i)*sin(i)+cos(1./i)*cos(1./i)/i*i;
	} 
	cout << P << endl;

	return 0;
}