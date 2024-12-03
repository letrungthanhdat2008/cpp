// capsocongmoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double a1, d, n, Sn;

    cout << "\nNhap a1: ";
    cin >> a1;
    cout << "\nNhap d: ";
    cin >> d;

    cout << "\nNhap n: ";
    cin >> n;

    Sn = n / 2 * (2 * a1 + (n - 1) * d);

    cout << "\nTong cap so cong la:" << Sn << endl;
    return 0;
}

