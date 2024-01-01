/**
  ******************************************************************************
  * @file           : 3_12miodulus.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 31/12/2023
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    const int lib_per_stn = 14;
    int libs;

    cout << "Enter your weight in pounds"  << endl;
    cin >> libs;
    int stone = libs / lib_per_stn;
    int pounds = libs % lib_per_stn;
    cout << libs << "pounds are " << stone << " stone , " << pounds << " pounds(s).\n";
    return 0;
}