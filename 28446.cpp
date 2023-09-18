#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, int> ball;
    int m, o, x, w;
    cin >> m;
    while (m--) {
        cin >> o;
        if (o == 1) {
            cin >> x >> w;
            ball.insert({ w, x });
        }
        if (o == 2) {
            cin >> w;
            cout << ball.at(w) << "\n";
        }
    }
}