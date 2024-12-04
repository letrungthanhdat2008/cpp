// hinhytron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    const double PI = 3.14159265358979323846;
    cout << "\nNhap ban kinh hinh tron: ";
    cin >> r;

    double chuVi = 2 * PI * r;
    double dienTich = PI * r * r;

    cout << "\nChu vi hinh tron: " << chuVi << endl;
    cout << "\nDien tich hinh tron: " << dienTich << endl;
    return 0;
}

