#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    char c;
    c = cin.get();
    c = cin.get();
    int counter = 0;
    while (c != '\n') {
        if (counter < 2) {
            cout << c;
            counter = k;
        }
        else
            counter--;
        c = cin.get();
    }
}