#include <iostream>
#include <queue>
using namespace std;

bool map[10][9] = { false, };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    queue<pair<int, pair<int, int>>> move;
    move.push(make_pair(0, make_pair(r1, c1))); //movecount, u, v
    map[r1][c1] = true;
    int answer = -1;
    while (!move.empty()) {
        int mc = move.front().first;
        int u = move.front().second.first;
        int v = move.front().second.second;
        move.pop();
        if (u == r2 && v == c2) {
            answer = mc;
            while (!move.empty()) {
                move.pop();
            }
        }
        else {
            if (u > 2 && !(r2 == u - 1 && c2 == v)) {
                if (v > 1 && !(r2 == u - 2 && c2 == v - 1)) {
                    if (!map[u - 3][v - 2]) {
                        map[u - 3][v - 2] = true;
                        move.push(make_pair(mc + 1, make_pair(u - 3, v - 2)));
                    }
                }
                if (v < 7 && !(r2 == u - 2 && c2 == v + 1)) {
                    if (!map[u - 3][v + 2]) {
                        map[u - 3][v + 2] = true;
                        move.push(make_pair(mc + 1, make_pair(u - 3, v + 2)));
                    }
                }
            }
            if (u > 1) {
                if (v > 2 && !(r2 == u && c2 == v - 1) && !(r2 == u - 1 && c2 == v - 2)) {
                    if (!map[u - 2][v - 3]) {
                        map[u - 2][v - 3] = true;
                        move.push(make_pair(mc + 1, make_pair(u - 2, v - 3)));
                    }
                }
                if (v < 6 && !(r2 == u && c2 == v + 1) && !(r2 == u - 1 && c2 == v + 2)) {
                    if (!map[u - 2][v + 3]) {
                        map[u - 2][v + 3] = true;
                        move.push(make_pair(mc + 1, make_pair(u - 2, v + 3)));
                    }
                }
            }
            if (u < 8) {
                if (v > 2 && !(r2 == u && c2 == v - 1) && !(r2 == u + 1 && c2 == v - 2)) {
                    if (!map[u + 2][v - 3]) {
                        map[u + 2][v - 3] = true;
                        move.push(make_pair(mc + 1, make_pair(u + 2, v - 3)));
                    }
                }
                if (v < 6 && !(r2 == u && c2 == v + 1) && !(r2 == u + 1 && c2 == v + 2)) {
                    if (!map[u + 2][v + 3]) {
                        map[u + 2][v + 3] = true;
                        move.push(make_pair(mc + 1, make_pair(u + 2, v + 3)));
                    }
                }
            }
            if (u < 7 && !(r2 == u + 1 && c2 == v)) {
                if (v > 1 && !(r2 == u + 2 && c2 == v - 1)) {
                    if (!map[u + 3][v - 2]) {
                        map[u + 3][v - 2] = true;
                        move.push(make_pair(mc + 1, make_pair(u + 3, v - 2)));
                    }
                }
                if (v < 7 && !(r2 == u + 2 && c2 == v + 1)) {
                    if (!map[u + 3][v + 2]) {
                        map[u + 3][v + 2] = true;
                        move.push(make_pair(mc + 1, make_pair(u + 3, v + 2)));
                    }
                }
            }
        }
    }
    cout << answer;
}