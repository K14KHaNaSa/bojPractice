#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, h, w;
    char ox;
    cin >> t;
    int tc = 1;
    while (t--) {
        cin >> h >> w;
        vector<vector<int>> lab(h, vector<int>(w));
        for (int i = 0; i < h; i++) {
            ox = cin.get();
            for (int j = 0; j < w; j++) {
                ox = cin.get();
                if (ox == 'O') {
                    lab[i][j] = 0;
                }
                else if (ox == 'X') {
                    lab[i][j] = 2;
                }
            }
        }
        queue<pair<int, int>> move;
        if (lab[0][0] == 0) {
            move.push(make_pair(0, 0));
            lab[0][0] = 1;
        }
        while (!move.empty()) {
            int u = move.front().first;
            int v = move.front().second;
            move.pop();
            if (u > 0) {
                if (lab[u - 1][v] == 0) {
                    lab[u - 1][v] = 1;
                    move.push(make_pair(u - 1, v));
                }
            }
            if (u < h - 1) {
                if (lab[u + 1][v] == 0) {
                    lab[u + 1][v] = 1;
                    move.push(make_pair(u + 1, v));
                }
            }
            if (v > 0) {
                if (lab[u][v - 1] == 0) {
                    lab[u][v - 1] = 1;
                    move.push(make_pair(u, v - 1));
                }
            }
            if (v < w - 1) {
                if (lab[u][v + 1] == 0) {
                    lab[u][v + 1] = 1;
                    move.push(make_pair(u, v + 1));
                }
            }
        }
        cout << "Case: " << tc << "\n";
        tc++;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cout << "+---";
            }
            cout << "+\n";
            for (int j = 0; j < w; j++) {
                if (lab[i][j] == 0) {
                    cout << "|   ";
                }
                else if (lab[i][j] == 1) {
                    cout << "| M ";
                }
                else if (lab[i][j] == 2) {
                    cout << "| X ";
                }
            }
            cout << "|\n";
        }
        for (int j = 0; j < w; j++) {
            cout << "+---";
        }
        cout << "+\n";
        if (lab[h - 1][w - 1] == 1) {
            cout << "Minions can cross the room\n";
        }
        else {
            cout << "Minions cannot cross the room\n";
        }
    }
}