/**
  ******************************************************************************
  * @file           : 4_5instr3.cpp
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
    cin.get(name,ArSize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert,ArSize).get();
    cout << "I have some delicious " << dessert << " for you ," << name << ".\n";
    return 0;

}