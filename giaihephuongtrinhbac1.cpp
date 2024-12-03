// giaihephuongtrinhbac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float a1, b1, c1, a2, b2, c2;
	cout << "\nNhap he so a1, b1, c1(cho phuong trinh a1*x + b1*y = c1): ";
	cin >> a1 >> b1 >> c1;

	cout << "\nNhap he so a2, b2, c2(cho phuong trinh a2*x + b2*y = c2): ";
	cin >> a2 >> b2 >> c2;

	float D = a1 * b2 - a2 * b1;
	float Dx = c1 * b2 - c2 * b1;
	float Dy = a1 * c2 - a2 * c1;

	if (D == 0) {
		if (Dx == 0 && Dy == 0) {
			cout << "He phuong trinh vo so nghiem." << endl;
		}
		else {
			cout << "He phuong trinh vo nghiem" << endl;
		}
	}
	else {
		float x = Dx / D;
		float y = Dy / D;
		cout << "Nghiem cua he phuong trinh la: x = " << x << "y = " << y << endl;
	}
	return 0;
}


