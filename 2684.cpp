#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ca[8];
    int n;
    char ht;
    char result[40];
    cin >> n;
    while (n--) {
        ht = cin.get();// \n dummy
        for (int i = 0; i < 8; i++)
            ca[i] = 0;
        for (int i = 0; i < 40; i++) {
            result[i] = cin.get();
        }
        for (int i = 0; i < 38; i++) {
            int c = 0;
            if (result[i] == 'H')
                c += 4;
            if (result[i + 1] == 'H')
                c += 2;
            if (result[i + 2] == 'H')
                c += 1;
            ca[c]++;
        }
        for (int i = 0; i < 8; i++)
            cout << ca[i] << " ";
        cout << "\n";
    }
}