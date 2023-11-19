#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l;
    cin >> l;
    if (l >= 380 && l < 425)
        cout << "Violet";
    else if (l < 450)
        cout << "Indigo";
    else if (l < 495)
        cout << "Blue";
    else if (l < 570)
        cout << "Green";
    else if (l < 590)
        cout << "Yellow";
    else if (l < 620)
        cout << "Orange";
    else
        cout << "Red";
}