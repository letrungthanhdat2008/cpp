// mang1chieu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "\nNhap so luong phan tu cua mang: ";
    cin >> n;

    int arr(n);

    cout << "\nNhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu" << i + 1 << ":";
        cin >> arr[i];
    }
    cout << "\nMang vua nhap la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}
