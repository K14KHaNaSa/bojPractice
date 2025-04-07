#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> link[10001]; // ���� ����
int p[10001]; // �α�
int usu[10001][2]; // [i][0] = i ������ ���� X / [i][1] = i ������ ����

void fill_p(int parent, int now) {
    int select = p[now];
    int not_select = 0;
    for (int i = 0; i < link[now].size(); i++) {
        int near = link[now][i];

        if (near == parent) continue; // Ž������ ���� ������ �θ����� ���
        fill_p(now, near);
        not_select += max(usu[near][0], usu[near][1]); // ����X�� ��� ���� ��尡 ���� �ǵ� �ȵǵ� ���X
        select += usu[near][0]; // ��� ���� ��尡 ������ ���� �ʾƾ� select
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