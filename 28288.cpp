#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char y;
    cin >> n;
    int day[5] = { 0, };
    while (n--) {
        y = cin.get(); // \n dummy input
        for (int i = 0; i < 5; i++) {
            y = cin.get();
            if (y == 'Y') {
                day[i]++;
            }
        }
    }
    int m = 0;
    bool more = false;
    for (int i = 0; i < 5; i++) {
        m = max(m, day[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (day[i] == m) {
            if (more) {
                cout << ",";
            }
            cout << i + 1;
            more = true;
        }
    }
}