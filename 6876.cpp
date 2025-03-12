#include <iostream>
using namespace std;

void d(int nc) {
    if(nc == 3 || nc == 6)
        cout << '-';
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, num_count;
    char c;
    cin >> t;
    c = cin.get(); // \n
    num_count = 0;
    while (t--) {
        c = cin.get();
        num_count = 0;
        while (c != '\n') {
            if (c >= '0' && c <= '9' && num_count < 10) {
                cout << c;
                num_count++;
                d(num_count);
            }
            if (c >= 'A' && c <= 'Z' && num_count < 10) {
                num_count++;
                if (c <= 'C')
                    cout << 2;
                else if (c <= 'F')
                    cout << 3;
                else if (c <= 'I')
                    cout << 4;
                else if (c <= 'L')
                    cout << 5;
                else if (c <= 'O')
                    cout << 6;
                else if (c <= 'S')
                    cout << 7;
                else if (c <= 'V')
                    cout << 8;
                else
                    cout << 9;
                d(num_count);
            }
            c = cin.get();
        }
        cout << '\n';
    }
}