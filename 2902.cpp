#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char n;
    n = cin.get();
    while (n != EOF) {
        if (n >= 'A' && n <= 'Z')
            cout << n;
        n = cin.get();
    }
}