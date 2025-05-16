#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<pair<int, int>> score;
    vector<int> qnum;
    for (int i = 0; i < 8; i++) {
        cin >> n;
        score.push_back(make_pair(n, i + 1));
    }
    sort(score.rbegin(), score.rend());
    cout << score[0].first + score[1].first + score[2].first + score[3].first + score[4].first << '\n';
    for (int i = 0; i < 5; i++) 
        qnum.push_back(score[i].second);
    sort(qnum.begin(), qnum.end());
    for (int i = 0; i < 5; i++)
        cout << qnum[i] << ' ';
}