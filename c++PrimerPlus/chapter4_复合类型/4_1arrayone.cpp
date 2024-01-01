/**
  ******************************************************************************
  * @file           : 4_1arrayone.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 31/12/2023
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 9;
    int yamcost[3] = {20, 30, 5};
    cout << "Total yams = ";
    cout << yams[0] << yams[1] << yams[2] << endl;
    cout << "The package with " << yams[1] << "yams costs " << yamcost[1] << " cents per yam." << endl;
    int total = yams[0] * yamcost[0] + yams[1] * yamcost[1];
    total = total + yams[2] * yamcost[2];
    cout << "The total yam expense is " << total << " cents" << endl;
    cout << "Size of yams array = " << sizeof yams << "bytes. ";
    cout << "Size of one element = " << sizeof yams[0] << "bytes. ";
}