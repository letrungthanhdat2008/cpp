// giaiptbac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{
    float a, b, x;

    cout << "\nNhap he so a: ";
    cin >> a;
    cout << "\nNhap he so b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
        else {
            cout << "phuong trinh vo nghiem" << endl;
        }
    }
    else {
        x = -b / a;
        cout << "Nghiem cua phuong trinh la: x= " << x << endl;
    }
    return 0;
}

