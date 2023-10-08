#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, p, s, items;
    bool able = true;
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++) {
        priority_queue<long long int> enemy;
        items = 0;
        for (int j = 0; j < m; j++) {
            cin >> s;
            if (s == -1 && able)
                items++;
            else if (s > 0 && able)
                enemy.push(s * -1);
        }
        while (!enemy.empty()) {
            if (enemy.top() * -1 > p) {
                if (items > 0) {
                    items--;
                    p *= 2;
                }
                else {
                    able = false;
                    while (!enemy.empty())
                        enemy.pop();
                }
            }
            else {
                p += enemy.top() * -1;
                enemy.pop();
            }
        }
        while (items > 0) {
            items--;
            p *= 2;
        }
    }
    if (able)
        cout << "1";
    else
        cout << "0";
}