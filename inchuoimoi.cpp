// inchuoimoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "\nNhap mot chuoi: ";
    getline(cin, input);

    cout << "Chuoi ban da nhap la:" << input << endl;

    return 0;
}

