#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int old, kg;
    string name;
    cin >> name >> old >> kg;
    while (!(name == "#" && old == 0 && kg == 0)) {
        if (old > 17 || kg >= 80) {
            cout << name << " Senior\n";
        }
        else {
            cout << name << " Junior\n";
        }
        cin >> name >> old >> kg;
    }
}