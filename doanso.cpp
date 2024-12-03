// doanso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int secretNumber = rand() % 100 + 1;
	int guess;
	int attempts = 0;

	cout << "\nChao mung ban den voi tro choi doan so!" << endl;
	cout << "Toi da chon mot so tu nhien tu 1 den 100. Hay doan xem do la so nao." << endl;

	do {
		cout << "\nNhap so ban doan: ";
		cin >> guess;
		attempts++;

		if (guess > secretNumber) {
			cout << "\nSo ban doan qua nho.Thu lai!" << endl;
		}
		else if (guess < secretNumber) {
			cout << "\nSo ban doan qua nho.Thu lai!" << endl;
		}
		else {
			cout << "\nChuc mung!Ban da doan dung so:" << secretNumber << endl;
			cout << "\nBan da doan dung so sau" << attempts << "lan thu" << endl;
		}
	} while (guess != secretNumber);
	return 0;
}

