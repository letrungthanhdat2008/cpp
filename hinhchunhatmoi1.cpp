// hinhchunhatmoi1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float dai, rong, chuVi, dienTich;

    cout << "\nNhap chieu dai: ";
    cin >> dai;
    cout << "\nNhap chieu rong: ";
    cin >> rong;

    chuVi = 2 * (dai + rong);
    dienTich = dai * rong;

    cout << "chu vi hinh chu nhat la:" << chuVi << endl;
    cout << "dien tich hinh chu nhat la:" << dienTich << endl;
    return 0;
}

