#include <iostream>
using namespace std;

int dist[200001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k, p, start, end;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> k;
        cin >> p;
        start = p;
        for (int j = 1; j < k; j++) {
            cin >> p;
        }
        end = p;
        for (int j = start; j <= end; j++)
            dist[j] += end - start;
        for (int j = 1; j < start; j++)
            dist[j] += (start - j) * 2;
        for (int j = end + 1; j <= 200000; j++)
            dist[j] += (j - end) * 2;
    }
    int minimum = 2000000001;
    int ans;
    for (int i = 1; i <= 200000; i++) {
        if (dist[i] < minimum) {
            minimum = dist[i];
            ans = i;
        }
    }
    cout << ans;
}