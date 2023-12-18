#include <iostream>
using namespace std;

int model[17][100];
int hba[16];
int onemodel, hb_result;
int n, m;

void bt(int pre, int ms) {
    if (ms % 2 == 1 && ms > 1) {
        int hb_now = 0;
        for (int j = 0; j < m; j++) {
            int guess = 0;
            for (int i = 0; i < ms; i++) {
                guess += model[hba[i]][j];
            }
            if (guess * 2 < ms && model[0][j] == 0)
                hb_now++;
            if (guess * 2 > ms && model[0][j] == 1)
                hb_now++;
        }
        hb_result = max(hb_result, hb_now);
    }
    for (int i = pre + 1; i <= n; i++) {
        hba[ms] = i;
        bt(i, ms + 1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int j = 0; j < m; j++)
        cin >> model[0][j]; // answer
    onemodel = 0;
    hb_result = 0;
    for (int i = 1; i <= n; i++) {
        int corrects = 0;
        for (int j = 0; j < m; j++) {
            cin >> model[i][j];
            if (model[i][j] == model[0][j])
                corrects++;
        }
        onemodel = max(onemodel, corrects);
    }
    for (int i = 1; i <= n; i++) {
        hba[0] = i;
        bt(i, 1);
    }
    if (onemodel < hb_result ? cout << 1 : cout << 0);
}