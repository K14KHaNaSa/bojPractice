#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[1000];
    int answer[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        answer[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                answer[j] = max(answer[j], answer[i] + 1);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, answer[i]);
    }
    cout << ans;
}