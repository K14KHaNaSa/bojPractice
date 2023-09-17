#include <iostream>
using namespace std;

bool ascii_printable[62]; // 0(48)~9(57) / 10A(65) ~ 35Z(90) / 36a(97) ~ 61z(122)

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k, s;
    char in;
    for (int i = 0; i < 62; i++) {
        ascii_printable[i] = true;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in >= 'A' && in <= 'Z') {
            ascii_printable[in - 'A' + 10] = false;
        }
        if (in >= 'a' && in <= 'z') {
            ascii_printable[in - 'a' + 36] = false;
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> in;
        ascii_printable[in - '0'] = false;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> in;
        if (in >= 'A' && in <= 'Z') {
            ascii_printable[in - 'A' + 10] = true;
        }
        if (in >= 'a' && in <= 'z') {
            ascii_printable[in - 'a' + 36] = true;
        }
        if (in >= '0' && in <= '9') {
            ascii_printable[in - '0'] = true;
        }
    }
    cin >> s;
    in = cin.get(); // \n dummy
    bool first_printed = false;
    bool dividing = true;
    bool printable = true;
    for (int i = 0; i < s; i++) {
        in = cin.get();
        printable = true;
        if (in == ' ')
            printable = false;
        if (in >= 'A' && in <= 'Z') {
            printable = ascii_printable[in - 'A' + 10];
        }
        if (in >= 'a' && in <= 'z') {
            printable = ascii_printable[in - 'a' + 36];
        }
        if (in >= '0' && in <= '9') {
            printable = ascii_printable[in - '0'];
        }
        if (printable) {
            if (dividing && first_printed) {
                cout << "\n";
            }
            cout << in;
            dividing = false;
            first_printed = true;
        }
        else
            dividing = true;
    }
}