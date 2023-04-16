#include <iostream>
#include <queue>
using namespace std;

bool attack[60][60][60] = { false, };
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, answer;
    int scv[3] = { 0, };
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> scv[i];
    }
    queue<pair<pair<int, int>, pair<int, int>>> hit;  // hitcount , scv1, scv2, scv3
    hit.push(make_pair(make_pair(0, scv[0]), make_pair(scv[1], scv[2])));
    attack[scv[0]][scv[1]][scv[2]] = true;
    attack[scv[0]][scv[2]][scv[1]] = true;
    attack[scv[1]][scv[0]][scv[2]] = true;
    attack[scv[1]][scv[2]][scv[0]] = true;
    attack[scv[2]][scv[0]][scv[1]] = true;
    attack[scv[2]][scv[1]][scv[0]] = true;
    while (!hit.empty()) {
        int hitcount = hit.front().first.first;
        int scv1 = hit.front().first.second;
        int scv2 = hit.front().second.first;
        int scv3 = hit.front().second.second;
        hit.pop();
        // find answer first
        if (max(scv1 - 9, 0) + max(scv2 - 3, 0) + max(scv3 - 1, 0) == 0 ||
            max(scv1 - 9, 0) + max(scv2 - 1, 0) + max(scv3 - 3, 0) == 0 || 
            max(scv1 - 3, 0) + max(scv2 - 9, 0) + max(scv3 - 1, 0) == 0 || 
            max(scv1 - 3, 0) + max(scv2 - 1, 0) + max(scv3 - 9, 0) == 0 || 
            max(scv1 - 1, 0) + max(scv2 - 9, 0) + max(scv3 - 3, 0) == 0 || 
            max(scv1 - 1, 0) + max(scv2 - 3, 0) + max(scv3 - 9, 0) == 0) {
            answer = hitcount + 1;
            while (!hit.empty()) {
                hit.pop();
            }
        }
        else {
            if (!attack[max(scv1 - 9, 0)][max(scv2 - 3, 0)][max(scv3 - 1, 0)] &&
                !attack[max(scv1 - 9, 0)][max(scv3 - 1, 0)][max(scv2 - 3, 0)] &&
                !attack[max(scv2 - 3, 0)][max(scv1 - 9, 0)][max(scv3 - 1, 0)] &&
                !attack[max(scv2 - 3, 0)][max(scv3 - 1, 0)][max(scv1 - 9, 0)] &&
                !attack[max(scv3 - 1, 0)][max(scv1 - 9, 0)][max(scv2 - 3, 0)] &&
                !attack[max(scv3 - 1, 0)][max(scv2 - 3, 0)][max(scv1 - 9, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 9, 0)), make_pair(max(scv2 - 3, 0), max(scv3 - 1, 0))));
                attack[max(scv1 - 9, 0)][max(scv2 - 3, 0)][max(scv3 - 1, 0)] = true;
                attack[max(scv1 - 9, 0)][max(scv3 - 1, 0)][max(scv2 - 3, 0)] = true;
                attack[max(scv2 - 3, 0)][max(scv1 - 9, 0)][max(scv3 - 1, 0)] = true;
                attack[max(scv2 - 3, 0)][max(scv3 - 1, 0)][max(scv1 - 9, 0)] = true;
                attack[max(scv3 - 1, 0)][max(scv1 - 9, 0)][max(scv2 - 3, 0)] = true;
                attack[max(scv3 - 1, 0)][max(scv2 - 3, 0)][max(scv1 - 9, 0)] = true;
            }
            if (!attack[max(scv1 - 9, 0)][max(scv2 - 1, 0)][max(scv3 - 3, 0)] &&
                !attack[max(scv1 - 9, 0)][max(scv3 - 3, 0)][max(scv2 - 1, 0)] &&
                !attack[max(scv2 - 1, 0)][max(scv1 - 9, 0)][max(scv3 - 3, 0)] &&
                !attack[max(scv2 - 1, 0)][max(scv3 - 3, 0)][max(scv1 - 9, 0)] &&
                !attack[max(scv3 - 3, 0)][max(scv1 - 9, 0)][max(scv2 - 1, 0)] &&
                !attack[max(scv3 - 3, 0)][max(scv2 - 1, 0)][max(scv1 - 9, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 9, 0)), make_pair(max(scv2 - 1, 0), max(scv3 - 3, 0))));
                attack[max(scv1 - 9, 0)][max(scv2 - 1, 0)][max(scv3 - 3, 0)] = true;
                attack[max(scv1 - 9, 0)][max(scv3 - 3, 0)][max(scv2 - 1, 0)] = true;
                attack[max(scv2 - 1, 0)][max(scv1 - 9, 0)][max(scv3 - 3, 0)] = true;
                attack[max(scv2 - 1, 0)][max(scv3 - 3, 0)][max(scv1 - 9, 0)] = true;
                attack[max(scv3 - 3, 0)][max(scv1 - 9, 0)][max(scv2 - 1, 0)] = true;
                attack[max(scv3 - 3, 0)][max(scv2 - 1, 0)][max(scv1 - 9, 0)] = true;
            }
            if (!attack[max(scv1 - 3, 0)][max(scv2 - 9, 0)][max(scv3 - 1, 0)] &&
                !attack[max(scv1 - 3, 0)][max(scv3 - 1, 0)][max(scv2 - 9, 0)] &&
                !attack[max(scv2 - 9, 0)][max(scv1 - 3, 0)][max(scv3 - 1, 0)] &&
                !attack[max(scv2 - 9, 0)][max(scv3 - 1, 0)][max(scv1 - 3, 0)] &&
                !attack[max(scv3 - 1, 0)][max(scv1 - 3, 0)][max(scv2 - 9, 0)] &&
                !attack[max(scv3 - 1, 0)][max(scv2 - 9, 0)][max(scv1 - 3, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 3, 0)), make_pair(max(scv2 - 9, 0), max(scv3 - 1, 0))));
                attack[max(scv1 - 3, 0)][max(scv2 - 9, 0)][max(scv3 - 1, 0)] = true;
                attack[max(scv1 - 3, 0)][max(scv3 - 1, 0)][max(scv2 - 9, 0)] = true;
                attack[max(scv2 - 9, 0)][max(scv1 - 3, 0)][max(scv3 - 1, 0)] = true;
                attack[max(scv2 - 9, 0)][max(scv3 - 1, 0)][max(scv1 - 3, 0)] = true;
                attack[max(scv3 - 1, 0)][max(scv1 - 3, 0)][max(scv2 - 9, 0)] = true;
                attack[max(scv3 - 1, 0)][max(scv2 - 9, 0)][max(scv1 - 3, 0)] = true;
            }
            if (!attack[max(scv1 - 3, 0)][max(scv2 - 1, 0)][max(scv3 - 9, 0)] &&
                !attack[max(scv1 - 3, 0)][max(scv3 - 9, 0)][max(scv2 - 1, 0)] &&
                !attack[max(scv2 - 1, 0)][max(scv1 - 3, 0)][max(scv3 - 9, 0)] &&
                !attack[max(scv2 - 1, 0)][max(scv3 - 9, 0)][max(scv1 - 3, 0)] &&
                !attack[max(scv3 - 9, 0)][max(scv1 - 3, 0)][max(scv2 - 1, 0)] &&
                !attack[max(scv3 - 9, 0)][max(scv2 - 1, 0)][max(scv1 - 3, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 3, 0)), make_pair(max(scv2 - 1, 0), max(scv3 - 9, 0))));
                attack[max(scv1 - 3, 0)][max(scv2 - 1, 0)][max(scv3 - 9, 0)] = true;
                attack[max(scv1 - 3, 0)][max(scv3 - 9, 0)][max(scv2 - 1, 0)] = true;
                attack[max(scv2 - 1, 0)][max(scv1 - 3, 0)][max(scv3 - 9, 0)] = true;
                attack[max(scv2 - 1, 0)][max(scv3 - 9, 0)][max(scv1 - 3, 0)] = true;
                attack[max(scv3 - 9, 0)][max(scv1 - 3, 0)][max(scv2 - 1, 0)] = true;
                attack[max(scv3 - 9, 0)][max(scv2 - 1, 0)][max(scv1 - 3, 0)] = true;
            }
            if (!attack[max(scv1 - 1, 0)][max(scv2 - 9, 0)][max(scv3 - 3, 0)] &&
                !attack[max(scv1 - 1, 0)][max(scv3 - 3, 0)][max(scv2 - 9, 0)] &&
                !attack[max(scv2 - 9, 0)][max(scv1 - 1, 0)][max(scv3 - 3, 0)] &&
                !attack[max(scv2 - 9, 0)][max(scv3 - 3, 0)][max(scv1 - 1, 0)] &&
                !attack[max(scv3 - 3, 0)][max(scv1 - 1, 0)][max(scv2 - 9, 0)] &&
                !attack[max(scv3 - 3, 0)][max(scv2 - 9, 0)][max(scv1 - 1, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 1, 0)), make_pair(max(scv2 - 9, 0), max(scv3 - 3, 0))));
                attack[max(scv1 - 1, 0)][max(scv2 - 9, 0)][max(scv3 - 3, 0)] = true;
                attack[max(scv1 - 1, 0)][max(scv3 - 3, 0)][max(scv2 - 9, 0)] = true;
                attack[max(scv2 - 9, 0)][max(scv1 - 1, 0)][max(scv3 - 3, 0)] = true;
                attack[max(scv2 - 9, 0)][max(scv3 - 3, 0)][max(scv1 - 1, 0)] = true;
                attack[max(scv3 - 3, 0)][max(scv1 - 1, 0)][max(scv2 - 9, 0)] = true;
                attack[max(scv3 - 3, 0)][max(scv2 - 9, 0)][max(scv1 - 1, 0)] = true;
            }
            if (!attack[max(scv1 - 1, 0)][max(scv2 - 3, 0)][max(scv3 - 9, 0)] &&
                !attack[max(scv1 - 1, 0)][max(scv3 - 9, 0)][max(scv2 - 3, 0)] &&
                !attack[max(scv2 - 3, 0)][max(scv1 - 1, 0)][max(scv3 - 9, 0)] &&
                !attack[max(scv2 - 3, 0)][max(scv3 - 9, 0)][max(scv1 - 1, 0)] &&
                !attack[max(scv3 - 9, 0)][max(scv1 - 1, 0)][max(scv2 - 3, 0)] &&
                !attack[max(scv3 - 9, 0)][max(scv2 - 3, 0)][max(scv1 - 1, 0)]) {
                hit.push(make_pair(make_pair(hitcount + 1, max(scv1 - 1, 0)), make_pair(max(scv2 - 3, 0), max(scv3 - 9, 0))));
                attack[max(scv1 - 1, 0)][max(scv2 - 3, 0)][max(scv3 - 9, 0)] = true;
                attack[max(scv1 - 1, 0)][max(scv3 - 9, 0)][max(scv2 - 3, 0)] = true;
                attack[max(scv2 - 3, 0)][max(scv1 - 1, 0)][max(scv3 - 9, 0)] = true;
                attack[max(scv2 - 3, 0)][max(scv3 - 9, 0)][max(scv1 - 1, 0)] = true;
                attack[max(scv3 - 9, 0)][max(scv1 - 1, 0)][max(scv2 - 3, 0)] = true;
                attack[max(scv3 - 9, 0)][max(scv2 - 3, 0)][max(scv1 - 1, 0)] = true;
            }
        }
    }
    cout << answer;
}