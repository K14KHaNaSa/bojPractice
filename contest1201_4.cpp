#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int lv;
    string g;
    cin >> lv >> g;
    if (g == "miss")
        cout << 0;
    else if (g == "bad")
        cout << lv * 200;
    else if (g == "cool")
        cout << lv * 400;
    else if (g == "great")
        cout << lv * 600;
    else
        cout << lv * 1000;
}