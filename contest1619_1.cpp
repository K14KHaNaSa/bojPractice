#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, ans, toy;
    int i, j, ok;
    bool tsy = false;
    cin >> s;
    toy = "toycartoon";
    for (i = 0; i < 10; i++) {
        if (toy.substr(i, 1) == s.substr(0, 1)) {
            ans = toy.substr(0, i) + s;
            ok = 0;
            for (j = 1; j < 10 - i; j++) {
                if (j + 1 > s.size())
                    break;
                if (toy.substr(i + 1, j) == s.substr(s.size() - j, j))
                    ok = j;
            }
            ans += toy.substr(i + ok + 1, 10 - i - ok);
            tsy = true;
            break;
        }
    }
    if (!tsy)
        ans = "toycartoon_" + s;
    (ans.size() > 20) ? cout << "toycartoon" : cout << ans;
}

// y this is wrong???