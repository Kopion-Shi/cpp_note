/**
  ******************************************************************************
  * @file           : 4_2string.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 31/12/2023
  ******************************************************************************
  */
#include "iostream"
#include "cstring"

int main() {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    cout << "Howdy! I`m " << name2;
    cout << "! what`s your name?\n";
    cin >> name1;
    cout << "well, " << name1 << " ,your name has " << strlen(name1) << " letters and is stored" << endl;
    cout << "in an ranger of " << sizeof(name1) << " bytes" << endl;
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: " << name2 << endl;
    return 0;

}