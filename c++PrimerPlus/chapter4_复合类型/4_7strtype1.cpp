/**
  ******************************************************************************
  * @file           : 4_7strtype1.cpp
  * @author         : Carl
  * @brief          : None
  * @attention      : None
  * @date           : 01/01/2024
  ******************************************************************************
  */
#include "iostream"
#include "string"

int main() {
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2="panther";
    cout << "Enter a kind of feline: " << endl;
    cin>>charr1;
    cout << "Enter anther kind of feline: " << endl;
    cin>>str1;
    cout<<"Here are some felines: \n"<<charr1<<" "<<charr2<<" "<<str1<<" "<<str2<<endl;
    cout<<"The third letter in "<<charr2<<" is"<<charr2[2]<<endl;
    cout<<"The third letter in "<<str2<<" is"<<str2[2]<<endl;


    return 0;

}