#include <iostream>
#include <iomanip>
using namespace std;

float average(float i1, float i2, float i3)
{
	return (i1 + i2 + i3) / 3;
}

int main()
{
	float n1 =0.0 , n2 = 0.0, n3 = 0.0;
	cout << "This program calculates the average of three numbers." << endl << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n2;

	float a = average(n1, n2, n3);

	cout << setprecision(2) << fixed << showpoint << "The average is " << a << endl;

	return 0;
}