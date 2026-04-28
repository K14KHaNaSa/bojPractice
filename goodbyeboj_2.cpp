#include <iostream>
#include <vector>
using namespace std;

long long int max(long long int a, long long int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int t, n, a, b, c, p, pre_a, pre_b, pre_c, pre_p, remain;
    bool able;
    cin >> t;
    while (t--) {
        cin >> n;
        able = true;
        pre_a = 0;
        pre_b = 0;
        pre_c = 0;
        pre_p = 0;
        remain = 0;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c >> p;
            if (!able)
                continue;
            if (max(a - pre_a, 0) + max(b - pre_b, 0) + max(c - pre_c, 0) - remain <= p - pre_p - 1) {
                if (max(a - pre_a, 0) + max(b - pre_b, 0) + max(c - pre_c, 0) <= p - pre_p - 1)
                    remain += (p - pre_p - 1) - (max(a - pre_a, 0) + max(b - pre_b, 0) + max(c - pre_c, 0));
                else {
                    remain -= max(a - pre_a, 0) + max(b - pre_b, 0) + max(c - pre_c, 0) - (p - pre_p - 1);
                }
                pre_a = max(a, pre_a);
                pre_b = max(b, pre_b);
                pre_c = max(c, pre_c);
                pre_p = max(p, pre_p);
            }
            else {
                able = false;
            }
        }
        able ? cout << "YES\n" : cout << "NO\n";
    }
}