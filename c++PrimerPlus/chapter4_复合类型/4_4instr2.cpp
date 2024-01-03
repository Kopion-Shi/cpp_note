/**
  ******************************************************************************
  * @file           : 4_3instr1.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 01/01/2024
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter your name: \n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert: \n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert << " for you ," << name << ".\n";

    return 0;

}