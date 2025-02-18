#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    c = cin.get();
    while (c != '\n') {
        cout << char(c + 'A' - 'a');
        c = cin.get();
    }
}