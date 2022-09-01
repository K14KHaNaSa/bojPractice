#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y;
    cin >> n;
    vector<pair<int,int>> point(n);
    for (int i = 0; i < n; i++) {
        cin >> point[i].first >> point[i].second;
    }
    sort(point.begin(), point.end());
    for (int i = 0; i < n; i++) {
        cout << point[i].first << " " << point[i].second << "\n";
    }
}