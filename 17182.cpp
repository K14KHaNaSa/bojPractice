#include <iostream>
using namespace std;
int n, k, answer;
int map[10][10];
bool visit[10] = { false, };
int rule[10];

void bt(int visitcount, int sumz) {
    if (visitcount == n) {
        answer = min(answer, sumz);
    }
    else {
        for (int i = 0; i < n; i++) {
            if (!visit[i] && sumz + map[rule[visitcount - 1]][i] <= answer) {
                rule[visitcount] = i;
                visit[i] = true;
                bt(visitcount + 1, sumz + map[rule[visitcount - 1]][i]);
                visit[i] = false;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    answer = 1000001;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }
    visit[k] = true;
    rule[0] = k;
    bt(1, 0);
    cout << answer;
}