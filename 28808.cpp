#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    char pm;
    int answer = 0;
    cin >> n >> m;
    while (n--) {
        pm = cin.get();
        bool ok = false;
        for (int i = 0; i < m; i++) {
            pm = cin.get();
            if (pm == '+') {
                ok = true;
            }
        }
        if (ok) {
            answer++;
        }
    }
    cout << answer;
}