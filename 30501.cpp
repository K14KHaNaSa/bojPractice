#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string name;
    cin >> n;
    while (n--) {
        bool s = false;
        cin >> name;
        for (int i = 0; i < name.length(); i++)
            if (name.substr(i, 1) == "S")
                s = true;
        if (s)
            cout << name;
    }
}