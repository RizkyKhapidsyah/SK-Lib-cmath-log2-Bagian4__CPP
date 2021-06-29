#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double x = 53.56, hasil;

	hasil = log2(x);
	cout << "Jika x = " << x << ", maka log2(x) = " << hasil << endl;

	x = -2.3321;
	hasil = log2(x);
	cout << "Jika x = " << x << ", maka log2(x) = " << hasil << endl;

	_getch();
	return 0;
}