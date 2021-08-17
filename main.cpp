#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	double celsius;
	double conversionFactor;
	double farhenheit;
	conversionFactor = 212 - 32;

	cout << "Enter temperature in Celcius: ";
	cin >> celsius;

	farhenheit = conversionFactor * celsius / 100 + 32;
	cout << "Farhenheit value is: " << farhenheit << endl;

	cout << "Press enter to Continue..." << endl;
	cin.ignore(10, 'n/');
	cin.get();
	return 0;
	system("pause>0");
}
