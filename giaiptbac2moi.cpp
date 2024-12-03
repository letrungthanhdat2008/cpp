// giaiptbac2moi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;

    cout << "\nNhap he so a: ";
    cin >> a;
    cout << "\nNhap he so b: ";
    cin >> b;
    cout << "\nNhap he so c: ";
    cin >> c;

    if (a == 0) {
        cout << "\nkhong phai phuong trinh bac 2" << endl;
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "phuong trinh co hai nghiem phan biet: x1=x2=" << x1<<"va x2 = "<< x2 << endl;
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            cout << "\nphuong trinh co mot nghiem kep: x1 = x2 = " << x1 << endl;
        }
        else {
            cout << "\nphuong trinh vo nghiem!" << endl;
        }
    }
    return 0;
}


