#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, i;
int adv[300000]; // 이익
vector<int> a; // 이익 vector(정렬용)
int prc[300000]; // 가격
int ghb; // 기회비용

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> adv[i];
        a.push_back(adv[i]);
    }
    sort(a.rbegin(), a.rend());
    for (i = 0; i < n; i++) {
        cin >> prc[i];
        if (adv[i] == a[0]) // 자신의 물건이 가장 큰 이익
            ghb = a[1] - prc[i];
        else
            ghb = a[0] - prc[i];
        cout << adv[i] - (ghb + prc[i]) << ' ';
    }
}