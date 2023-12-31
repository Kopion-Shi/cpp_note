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

int main() {
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(n_int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;

    cout << "Maxinum values: " << endl;
    cout<<"int: "<<n_int<<endl;
    cout<<"short: "<<n_short<<endl;
    cout<<"long: "<<n_long<<endl;
    cout<<"long long: "<<n_llong<<endl;

    cout << "Mininum values: " << endl;
    cout<<"int: "<<INT_MIN<<endl;
    cout<<"bits per byte: "<<CHAR_BIT<<endl;
}