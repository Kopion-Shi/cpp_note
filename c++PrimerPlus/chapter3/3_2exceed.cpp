/**
  ******************************************************************************
  * @file           : 3_1limits.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 30/12/2023
  ******************************************************************************
  */
#include "iostream"
#include "climits"

#define ZERO 0

int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl
         << "ADD $1 to each account" << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\n Poor sam !" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl
         << "take $1 from each account" << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\n Luck sue !" << endl;
    return 0;
}