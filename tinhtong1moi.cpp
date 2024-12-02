// tinhtong1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "\nNhap mot so nguyen n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "\nTong cac so tu 1 den " << n << "la:" << sum << endl;

    return 0;
}

