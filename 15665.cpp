#include <iostream>
using namespace std;

int n, m;
int m_num[7];
int prnt[7];

void bt(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++)
            cout << prnt[i] << " ";
        cout << "\n";
    }
    else {
        int pre = m_num[0];
        prnt[depth] = m_num[0];
        bt(depth + 1);
        for (int i = 1; i < n; i++) {
            if (pre != m_num[i]) {
                prnt[depth] = m_num[i];
                bt(depth + 1);
                pre = m_num[i];
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> m_num[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 2; j >= i; j--) {
            if (m_num[j] > m_num[j + 1]) {
                int temp = m_num[j];
                m_num[j] = m_num[j + 1];
                m_num[j + 1] = temp;
            }
        }
    }
    bt(0);
}