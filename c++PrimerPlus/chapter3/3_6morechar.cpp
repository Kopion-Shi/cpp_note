/**
  ******************************************************************************
  * @file           : 3_6morechar.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 31/12/2023
  ******************************************************************************
  */
#include "iostream"

int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for: " << ch << " is " << i << endl;

    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for: " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch):  ";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" << endl;

    return 0;
}