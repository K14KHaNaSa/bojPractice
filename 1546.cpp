#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    float avg = 0;
    cin >> n;
    vector<float> score(n);
    int m = 0;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (m < score[i]) {
            m = score[i];
        }
    }
    for (int i = 0; i < n; i++) {
        avg = avg + (score[i] / m) * 100;
    }
    cout << avg / n;
}