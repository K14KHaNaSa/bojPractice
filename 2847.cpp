#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, minus;
    cin >> n;
    vector<int> score(n);
    vector<int> scoremax(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    minus = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (score[i] >= score[i + 1]) {
            minus += score[i] - score[i + 1] + 1;
            score[i] = score[i + 1] - 1;
        }
    }
    cout << minus;
}