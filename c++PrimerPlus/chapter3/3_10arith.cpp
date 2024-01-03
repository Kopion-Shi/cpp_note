/**
  ******************************************************************************
  * @file           : 3_10arith.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 31/12/2023
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float hats, heads;

    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats  =" << hats << "heads  =" << heads << endl;
    cout << "hats + heads =" << hats + heads << endl;
    cout << "hats - heads =" << hats - heads << endl;
    cout << "hats * heads =" << hats * heads << endl;
    cout << "hats / heads =" << hats / heads << endl;



    return 0;
}