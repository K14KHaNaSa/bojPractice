#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d, m, y, i;
    string s;
    vector<pair<int, string>> student;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s >> d >> m >> y;
        student.push_back(make_pair(d + m * 31 + y * 365, s));
    }
    sort(student.begin(), student.end());
    cout << student[n - 1].second << '\n' << student[0].second;
}