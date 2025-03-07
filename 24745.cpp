#include <iostream>
#include <queue>
using namespace std;

deque<int> m; // 0 = . / 1 = -

void pal(char c) {
    if (c == 'A') {
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'B') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'C') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'D') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'E') {
        m.push_back(0);
    }
    if (c == 'F') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'G') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'H') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'I') {
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'J') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == 'K') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'L') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'M') {
        m.push_back(1);
        m.push_back(1);
    }
    if (c == 'N') {
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'O') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == 'P') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'Q') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'R') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(0);
    }
    if (c == 'S') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == 'T') {
        m.push_back(1);
    }
    if (c == 'U') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'V') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'W') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == 'X') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == 'Y') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == 'Z') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == '0') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == '1') {
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == '2') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == '3') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
        m.push_back(1);
    }
    if (c == '4') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(1);
    }
    if (c == '5') {
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == '6') {
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == '7') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == '8') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
        m.push_back(0);
    }
    if (c == '9') {
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(1);
        m.push_back(0);
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    c = cin.get();
    while (c != '\n') {
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
        if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            pal(c);
        c = cin.get();
    }
    bool ans = true;
    if (m.size() < 1)
        ans = false;
    while (m.size() > 1) {
        if (m.front() == m.back()) {
            m.pop_back();
            m.pop_front();
        }
        else {
            ans = false;
            break;
        }
    }
    ans ? cout << "YES" : cout << "NO";
}