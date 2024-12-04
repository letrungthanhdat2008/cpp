// fibonaccimoi1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return(fibonacci(n - 1) + fibonacci(n - 2);
}

void inDayFibonacci(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "\nNhap so phan tu fibonacci can in: ";
    cin >> n;

    cout << "\nDay fibonacci dau tien: ";
    inDayFibonacci(n);
    return 0;
}

