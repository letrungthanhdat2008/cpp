// sapxepchuoimoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    std::string str = "hello Alex";

    std::sort(str.begin(), str.end());

    std::cout << "Chuoi khi sap xep: " << str << endl;

    return 0;
}

