#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int deg, min, sec;
	long double rad;
	cout << "Enter degrees, minutes and seconds" << endl;
	cin >> deg >> min >> sec;
	sec += min * 60 + deg * 3600;
	rad = (sec * M_PI) / (180.0 * 3600.0);
	cout << setprecision(15) << rad << endl;
	system("pause");
}