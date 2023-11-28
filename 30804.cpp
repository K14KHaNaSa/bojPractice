#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, c;
    int ans = 0;
    cin >> n;
    deque<pair<int, int>> fruit; // (Si, count)
    deque<pair<int, int>> s; // fruit types (S1, objs)
    while (n--) {
        cin >> i;
        if (fruit.empty()) {
            fruit.push_back(make_pair(i, 1));
            s.push_back(make_pair(i, 1));
        }
        else if (fruit.back().first == i) {
            c = fruit.back().second;
            fruit.pop_back();
            fruit.push_back(make_pair(i, c + 1));
            if (s.front().first == i) {
                c = s.front().second;
                s.pop_front();
                s.push_front(make_pair(i, c + 1));
            }
            else {//s.back().first
                c = s.back().second;
                s.pop_back();
                s.push_back(make_pair(i, c + 1));
            }
        }
        else if (s.front().first == i) {
            c = s.front().second;
            s.pop_front();
            s.push_front(make_pair(i, c + 1));
            fruit.push_back(make_pair(i, 1));
        }
        else if (s.back().first == i) {
            c = s.back().second;
            s.pop_back();
            s.push_back(make_pair(i, c + 1));
            fruit.push_back(make_pair(i, 1));
        }
        else if(s.size()==1){
            fruit.push_back(make_pair(i, 1));
            s.push_back(make_pair(i, 1));
        }
        else {
            while (s.size() > 1) {
                int fruit_t = fruit.front().first;
                int fruit_s = fruit.front().second;
                fruit.pop_front();
                if (s.front().first == fruit_t) {
                    int s_s = s.front().second;
                    s.pop_front();
                    if (s_s - fruit_s > 0)
                        s.push_front(make_pair(fruit_t, s_s - fruit_s));
                }
                else {
                    int s_s = s.back().second;
                    s.pop_back();
                    if (s_s - fruit_s > 0)
                        s.push_back(make_pair(fruit_t, s_s - fruit_s));
                }
            }
            s.push_back(make_pair(i, 1));
            fruit.push_back(make_pair(i, 1));
        }
        if (s.size() == 1)
            ans = max(ans, s.front().second);
        else
            ans = max(ans, s.front().second + s.back().second);
    }
    cout << ans;
}