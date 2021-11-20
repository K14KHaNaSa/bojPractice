#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, count = 0;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= c; i++) {
        for (int j = 0; j < n; j++) {
            if (i % a[j] == 0) {
                count++;
                break;
            }
        }
        
    }
    cout << count;
}