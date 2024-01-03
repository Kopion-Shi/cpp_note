#include  <iostream>

void simon(int);//function prototype for simon()

int main() {
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int cont;
    cin >> cont;
    simon(cont);
    cout << "Done!" << endl;

    return 0;
};

void simon(int x) {
    using namespace std;
    cout << "Simon says touch your toes: " << x << " time." << endl;
}