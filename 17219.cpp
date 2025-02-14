#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<string, string> ws;
    int n, m;
    string w, s;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> w >> s;
        ws.insert({ w, s });
    }
    while (m--) {
        cin >> w;
        if (ws.find(w) != ws.end())
            cout << ws.at(w) << '\n';
    }
}