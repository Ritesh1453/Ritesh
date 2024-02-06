#include <iostream>
using namespace std;

int main() {
    cout << "Enter your favourite number from '1-9': ";
    int x, y, z, a, b, d, c, e;
    cin >> x;
    y = x * 2;
    z = y + 5;
    a = z * 50;
    int t;
    cout << a << endl;
    cout << "This is the game that can display your favourite number and your age.\n";
    cout << "Certain inputs are taken such as birth year.\n";
    cout << "If you have celebrated your birthday, then add 1774.\n";
    cout << "If not, then 1775: ";
    cin >> b;
    if (b == 1774) {
        d = a + b;
        cout << "Enter the birth year: ";
        cin >> c;
        e = d - c;
        cout << "Your chosen number is first on hundred's place\n";
        cout << "And your age is on unit and ten's place: " << e;
    } else if (b == 1773) {
        d = a + b;
        cout << "Enter the birth year: ";
        cin >> c;
        e = d - c;
        cout << "Your chosen number is first on hundred's place\n";
        cout << "And your age is on unit and ten's place: " << e;
    }
    return 0;
}

