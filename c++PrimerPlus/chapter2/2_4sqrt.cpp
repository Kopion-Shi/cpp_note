#include  <iostream>
#include "cmath"

int main() {
    using namespace std;
    double area;
    cout << "Enter the foor area,in square feet , of your home: ";
    cin >> area;
    double side = sqrt(area);
    cout << "That`s the equivalent of square: " << side << " feed to side" << endl << "How fascinating!" << endl;

    return 0;
};