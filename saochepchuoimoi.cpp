// saochepchuoimoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const char* str1 = "Thanh Dat";
    char str2[50];

    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    cout << "str 2:" << str2 << endl;

    return 0;
}

