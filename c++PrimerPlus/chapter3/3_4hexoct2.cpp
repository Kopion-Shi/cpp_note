/**
  ******************************************************************************
  * @file           : hexoct.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 30/12/2023
  ******************************************************************************
  */
#include "iostream"


int main() {
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure" << endl;
    cout << "chest = " << chest << "(42 in decimal)" << endl;
    cout << hex;
    cout << "waist = " << waist << "(42 in hec)" << endl;
    cout << oct ;
    cout << "inseam = " << inseam << "(42 in octal)" << endl;
    return 0;
}