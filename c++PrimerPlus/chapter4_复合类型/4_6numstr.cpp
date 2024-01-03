/**
  ******************************************************************************
  * @file           : 4_6numstr.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 01/01/2024
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "what is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl << "Address: " << address << endl << "Done !" << endl;
    return 0;

}