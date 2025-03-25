#include <iostream>
#include <vector>
using namespace std;

int n, m, k, v, w;
vector<int> tomo[10001]; // rule -> v < w and v (parent) <- w (child)
// tomo[i][0] = root
int a[10001];
int friend_min;

int headtomo(int root, int child) {
    int min_a = a[child];
    if (tomo[child].size() > 1) {
        for (int ht = 1; ht < tomo[child].size(); ht++) {
            int next_child = tomo[child][ht];
            if (tomo[next_child][0] == next_child) { // not friend linked
                tomo[next_child][0] = root;
                friend_min = headtomo(root, next_child);
                if (friend_min < min_a)
                    min_a = friend_min;
            }
        }
    }
    return min_a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool exist;
    int min_cost = 0;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        tomo[i].push_back(i);
    }
    while (m--) {
        cin >> v >> w;
        if (v == w) continue;
        exist = false;
        for (int i = 1; i < tomo[v].size(); i++) {
            if (tomo[v][i] == w) {
                exist = true;
                break;
            }
        }
        for (int i = 1; i < tomo[v].size(); i++) {
            if (tomo[w][i] == v) {
                exist = true;
                break;
            }
        }
        if (!exist) {
            tomo[v].push_back(w);
            tomo[w].push_back(v);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (tomo[i][0] == i)
            min_cost += headtomo(i, i);
    }
    (k - min_cost < 0) ? cout << "Oh no" : cout << min_cost;
}