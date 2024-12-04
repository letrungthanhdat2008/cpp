// timkiemchuoimoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str = "Thanh Dat";
    std::string subStr = "Dat";

    size_t found = str.find(subStr);
    if (found != std::string::npos) {
        std::cout << "\nChuoi con duoc tim thay tai vi tri: " << found << std::endl;
    }
    else {
        std::cout << "Chuoi con khong duoc tim thay!" << std::endl;
    }
    return 0;
}


