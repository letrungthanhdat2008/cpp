// giaithuamoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "\nNhap vao mot so nguyen n: ";
    cin >> n;
    cout << "Giai thua cua" << n << "la:" << factorial(n) << endl;
    return 0;
}

