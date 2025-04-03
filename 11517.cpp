#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, ans;
    int ds[4];
    for (i = 0; i < 4; i++)
        cin >> ds[i];
    while (!(ds[0] == -1 && ds[3] == -1)) {
        if (ds[0] == -1) {
            if ((ds[2] - ds[1]) == (ds[3] - ds[2])) {
                ans = ds[1] - (ds[2] - ds[1]);
                if (ans > 0 && ans < 10001)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else if ((ds[2] / ds[1]) == (ds[3] / ds[2]) && (ds[2] % ds[1] == 0) && (ds[3] % ds[2] == 0)) {
                ans = ds[1] / (ds[2] / ds[1]);
                if (ans > 0 && ans < 10001 && ds[1] % (ds[2] / ds[1]) == 0)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else
                cout << "-1\n";
        }
        else if (ds[1] == -1) {
            if ((ds[3] - ds[2]) * 2 == (ds[2] - ds[0])) {
                ans = ds[0] + (ds[3] - ds[2]);
                if (ans > 0 && ans < 10001)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else if ((ds[3] / ds[2]) * (ds[3] / ds[2]) == (ds[2] / ds[0]) && (ds[3] % ds[2] == 0) && (ds[2] % ds[0] == 0)) {
                ans = ds[0] * (ds[3] / ds[2]);
                if (ans > 0 && ans < 10001 && ds[2] % (ds[3] / ds[2]) == 0)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else
                cout << "-1\n";
        }
        else if (ds[2] == -1) {
            if ((ds[3] - ds[1]) == (ds[1] - ds[0]) * 2) {
                ans = ds[1] + (ds[1] - ds[0]);
                if (ans > 0 && ans < 10001)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else if ((ds[3] / ds[1]) == (ds[1] / ds[0]) * (ds[1] / ds[0]) && (ds[3] % ds[1] == 0) && (ds[1] % ds[0] == 0)) {
                ans = ds[1] * (ds[1] / ds[0]);
                if (ans > 0 && ans < 10001 && ds[3] % (ds[1] / ds[0]) == 0)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else
                cout << "-1\n";
        }
        else {
            if ((ds[2] - ds[1]) == (ds[1] - ds[0])) {
                ans = ds[2] + (ds[2] - ds[1]);
                if (ans > 0 && ans < 10001)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else if ((ds[2] / ds[1]) == (ds[1] / ds[0]) && (ds[2] % ds[1] == 0) && (ds[1] % ds[0] == 0)) {
                ans = ds[2] * (ds[2] / ds[1]);
                if (ans > 0 && ans < 10001)
                    cout << ans << '\n';
                else
                    cout << "-1\n";
            }
            else
                cout << "-1\n";
        }
        for (i = 0; i < 4; i++)
            cin >> ds[i];
    }
}