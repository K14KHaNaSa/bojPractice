#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string ntr;
    int ans = 0;
    int hlmt;
    for (int i = 1; i <= 1000; i++) {
        cout << "? " << i << " 1" << endl;
        cin >> ntr;
        if (ntr == "ArrayIndexOutOfBoundsException") {
            hlmt = i;
            break;
        }
        else {
            ans = max(ans, stoi(ntr));
        }
    }
    int vlmt;
    for (int i = 2; i <= 1000; i++) {
        cout << "? 1 " << i << endl;
        cin >> ntr;
        if (ntr == "ArrayIndexOutOfBoundsException") {
            vlmt = i;
            break;
        }
        else {
            ans = max(ans, stoi(ntr));
        }
    }
    for (int i = 2; i < hlmt; i++) {
        for (int j = 2; j < vlmt; j++) {
            cout << "? " << i << " " << j << endl;
            cin >> ntr;
            ans = max(ans, stoi(ntr));
        }
    }
    cout << "! " << ans;
}