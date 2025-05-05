#include <iostream>
using namespace std;

int sctoi(string s) {
    if (s == "0")
        return 0;
    if (s == "1")
        return 1;
    if (s == "2")
        return 2;
    if (s == "3")
        return 3;
    if (s == "4")
        return 4;
    if (s == "5")
        return 5;
    if (s == "6")
        return 6;
    if (s == "7")
        return 7;
    if (s == "8")
        return 8;
    if (s == "9")
        return 9;
    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    string s;
    bool plus;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "P=NP")
            cout << "skipped\n";
        else {
            plus = false;
            a = 0;
            b = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s.substr(i, 1) == "+")
                    plus = true;
                else if (!plus) {
                    a *= 10;
                    a += sctoi(s.substr(i, 1));
                }
                else {
                    b *= 10;
                    b += sctoi(s.substr(i, 1));
                }
            }
            cout << a + b << '\n';
        }
    }
}