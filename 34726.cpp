#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, string>> track;
vector<string> answer;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t, ti, i, front, now;
    int track_now = 0;
    string d;

    cin >> n >> t;
    for (i = 0; i < n; i++) {
        cin >> d >> ti;
        track_now += ti;
        track_now %= t;
        track.push_back(make_pair(track_now, d));
    }
    sort(track.begin(), track.end());
    front = track[n - 1].first - t;
    now = track[0].first;
    if (now - front > 0 && now - front <= 1000)
        answer.push_back(track[0].second);
    for (i = 1; i < n; i++) {
        front = track[i - 1].first;
        now = track[i].first;
        if (now - front > 0 && now - front <= 1000)
            answer.push_back(track[i].second);
    }
    sort(answer.begin(), answer.end());
    if (answer.empty())
        cout << -1;
    else {
        for (i = 0; i < answer.size(); i++)
            cout << answer[i] << ' ';
    }
}