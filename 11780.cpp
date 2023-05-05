#include <iostream>
#include <queue>
using namespace std;

int n;
int path[100][100];
int map[100][100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, a, b, c, next;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            map[i][j] = 1000000001;
            path[i][j] = j;
        }
        map[i][i] = 0;
    }
    cin >> m;
    while (m--) {
        cin >> a >> b >> c;
        if (map[a - 1][b - 1] > c) {
            map[a - 1][b - 1] = c;
            path[a - 1][b - 1] = b - 1;
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (map[i][j] >= map[i][k] + map[k][j] && i != k && j != k) {
                    map[i][j] = map[i][k] + map[k][j];
                    path[i][j] = path[i][k]; // mid point
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] > 1000000000 || i == j) {
                cout << "0 ";
            }
            else {
                cout << map[i][j] << " ";
            }
        }
        cout << "\n";
    }
    queue<int> pathfinder;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] > 1000000000 || i == j) {
                cout << "0";
            }
            else {
                pathfinder.push(i);
                next = path[i][j];
                while (next != j) {
                    pathfinder.push(next);
                    next = path[next][j];
                }
                pathfinder.push(j);
                cout << pathfinder.size() << " ";
                while (!pathfinder.empty()) {
                    cout << pathfinder.front() + 1 << " ";
                    pathfinder.pop();
                }
            }
            cout << "\n";
        }
    }
}