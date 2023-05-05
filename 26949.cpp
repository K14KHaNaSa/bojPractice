#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int pa, ka, pb, kb, n;
    cin >> pa >> ka >> pb >> kb >> n;
    int answer = 10000000;
    int ansa, ansb;
    for (int i = 0; i <= n / ka; i++) {
        for (int j = 0; j <= n - (n - ka * i); j++) {
            if (pa * i + pb * j < answer && ka * i + kb * j >= n) {
                ansa = i;
                ansb = j;
                answer = pa * i + pb * j;
            }
        }
    }
    cout << ansa << " " << ansb << " " << answer;
}