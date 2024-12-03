// doitiente.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double amount, result;

    cout << "\nChon loai tien ban muon doi:";
    cout << "\nDoi tu VND sang USD";
    cout << "\nDoi tu USD sang EUR";
    cout << "\nĐổi từ USD sang GBP\n";
    cout << "\nNhap lua chon cua ban:";
    cin >> choice;

    cout << "\nNhap so tien USD:";
    cin >> amount;

    switch (choice) {
    case 1:
        result = amount * 23000;
        cout << amount << "\nUSD = " << result << "VND";
        break;
    case 2:
        result = amount * 0.92;
        cout << amount << "\nUSD = " << result << "EUR";
        break;
    case 3:
        result = amount * 0.75;
        cout << amount << "USD = " << result << "GBP";
        break;
    default:
        cout << "Lua chon khong hop le!";
    }
    return 0;
}

