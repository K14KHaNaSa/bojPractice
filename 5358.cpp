#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char n;
    n = cin.get();
    while (n != EOF) {
        if (n == 'i')
            cout << "e";
        else if (n == 'e')
            cout << "i";
        else if (n == 'I')
            cout << "E";
        else if (n == 'E')
            cout << "I";
        else
            cout << n;
        n = cin.get();
    }
}