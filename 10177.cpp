#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int sq[5][5];
    int tmp;
    vector<int> sm;
    bool msq;
    cin >> n;
    while (n--) {
        cin >> m;
        sm.clear();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++)
                cin >> sq[i][j];
        }
        for (int i = 0; i < m; i++) {
            tmp = 0;
            for (int j = 0; j < m; j++)
                tmp += sq[i][j];
            sm.push_back(tmp);
        }
        for (int j = 0; j < m; j++) {
            tmp = 0;
            for (int i = 0; i < m; i++)
                tmp += sq[i][j];
            sm.push_back(tmp);
        }
        tmp = 0;
        for (int i = 0; i < m; i++)
            tmp += sq[i][i];
        sm.push_back(tmp);
        tmp = 0;
        for (int i = 0; i < m; i++)
            tmp += sq[i][m - i - 1];
        sm.push_back(tmp);
        msq = true;
        for (int i = 0; i < sm.size() - 1; i++) {
            if (sm[i] != sm[i + 1]) {
                msq = false;
                break;
            }
        }
        msq ? cout << "Magic square of size " << m << '\n' : cout << "Not a magic square\n";
    }
}