// continue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}

