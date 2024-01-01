/**
  ******************************************************************************
  * @file           : 3_13assign.cpp
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
    float tree = 3;
    int guess(3.3982);
    int debt = 7.2E12;

    cout << "Tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return 0;
}
