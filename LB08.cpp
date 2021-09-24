#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
//группа 501/502
/*Аверкина А. М.
  Муравьёв А. В.
  Чернятинская А. С.*/

void main() {
	setlocale(LC_ALL, "Russian");
	double m, z, a, b, t, c;
	cout << "Вводим m = ";
	cin >> m;
	cout << "Вводим b = ";
	cin >> b;
	cout << "Вводим t = ";
	cin >> t;
	cout << "Вводим c = ";
	cin >> c;
	t *= M_PI / 180;
	a = pow(m * tan(t) + abs(c * sin(t)), 1 / 3.);
	c*= M_PI / 180;
	b*= M_PI / 180;
	z = m * cos(b * t * sin(t) + c);
	cout <<"Z = "<< z <<endl<<"a = "<< a << endl;
	system("PAUSE");
}