#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, b;
    string a;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << a << " ";
        if (b < 60)
            cout << "F";
        else if (b < 67)
            cout << "D";
        else if (b < 70)
            cout << "D+";
        else if (b < 77)
            cout << "C";
        else if (b < 80)
            cout << "C+";
        else if (b < 87)
            cout << "B";
        else if (b < 90)
            cout << "B+";
        else if (b < 97)
            cout << "A";
        else
            cout << "A+";
        cout << "\n";
    }
}