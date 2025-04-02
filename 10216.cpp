#include <iostream>
#include <vector>
using namespace std;

int t, n, x, y, r, ans, ally_num;
int xyr[3000][3];
vector<int> ally[3000]; // ally[?][0] = itself(default) or linked ally

void allylink(int root, int child) {
    if (ally[child].size() > 1) {
        for (int k = 1; k < ally[child].size(); k++) {
            ally_num = ally[child][k];
            if (ally[ally_num][0] > root) {
                ally[ally_num][0] = root;
                allylink(root, ally_num);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        for (int i = 0; i < n; i++) {
            ally[i].clear();
            cin >> xyr[i][0] >> xyr[i][1] >> xyr[i][2];
            ally[i].push_back(i);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                x = max(xyr[i][0] - xyr[j][0], xyr[j][0] - xyr[i][0]);
                y = max(xyr[i][1] - xyr[j][1], xyr[j][1] - xyr[i][1]);
                r = xyr[i][2] + xyr[j][2];
                if (x * x + y * y <= r * r) {
                    ally[i].push_back(j);
                    ally[j].push_back(i);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ally[i][0] == i) {
                allylink(i, i);
                ans++;
            }
        }
        cout << ans << '\n';
    }
}