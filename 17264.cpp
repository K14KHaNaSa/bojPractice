#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<string, char> player;
    int n, p, w, l, g;
    string p_name;
    char p_result;
    cin >> n >> p >> w >> l >> g;
    while (p--) {
        cin >> p_name >> p_result;
        player.insert(make_pair(p_name, p_result));
    }
    int score = 0;
    bool iron = true;
    while (n--) {
        cin >> p_name;
        if (player.find(p_name) == player.end()) {
            score = max(0, score - l);
        }
        else if (player.at(p_name) == 'W')
            score += w;
        else
            score = max(0, score - l);
        if (score >= g)
            iron = false;
    }
    cout << "I AM ";
    if (!iron)
        cout << "NOT ";
    cout << "IRONMAN!!";
}