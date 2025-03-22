#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int mem = 0;
    string s, t;
    vector<string> name;
    cin >> n >> t;
    while (n--) {
        cin >> s;
        name.push_back(s);
    }
    sort(name.begin(), name.end());
    s = "¿”Ω∫";
    for (int i = 0; i < name.size(); i++) {
        if (s != name[i]) {
            s = name[i];
            mem++;
        }
    }
    if (t == "Y")
        cout << mem;
    else if (t == "F")
        cout << mem / 2;
    else
        cout << mem / 3;
}