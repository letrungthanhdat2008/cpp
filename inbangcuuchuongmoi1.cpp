// inbangcuuchuongmoi1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "x" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}


