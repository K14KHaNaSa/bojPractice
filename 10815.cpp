#include <iostream>
#include <unordered_map>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, int> card;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        card.insert({ m, i });
    }
    cin >> m;
    while (m--) {
        cin >> n;
        if (card.find(n) != card.end())
            cout << "1 ";
        else
            cout << "0 ";
    }
}