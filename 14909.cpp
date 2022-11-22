#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int count = 0;
    cin >> n;
    while (!cin.eof()) {
        if (n > 0) {
            count++;
        }
        cin >> n;
    }
    cout << count;
}