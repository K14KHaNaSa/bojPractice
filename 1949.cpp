#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> link[10001]; // 마을 연결
int p[10001]; // 인구
int usu[10001][2]; // [i][0] = i 마을이 선정 X / [i][1] = i 마을이 선정

void fill_p(int parent, int now) {
    int select = p[now];
    int not_select = 0;
    for (int i = 0; i < link[now].size(); i++) {
        int near = link[now][i];

        if (near == parent) continue; // 탐색중인 다음 마을이 부모노드일 경우
        fill_p(now, near);
        not_select += max(usu[near][0], usu[near][1]); // 선정X일 경우 하위 노드가 선정 되든 안되든 상관X
        select += usu[near][0]; // 모든 하위 노드가 선정이 되지 않아야 select
    }
    usu[now][0] = not_select;
    usu[now][1] = select;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int u, v;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        link[u].push_back(v);
        link[v].push_back(u);
    }

    fill_p(0, 1);

    cout << max(usu[1][0], usu[1][1]);
}