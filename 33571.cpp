#include <iostream>
using namespace std;

int ans;

int chk(char c) {
    switch (c) {
    case 'B': return 2; break;
    case 'A':
    case 'a':
    case 'b':
    case 'D':
    case 'd':
    case 'e':
    case 'g':
    case 'O':
    case 'o':
    case 'P':
    case 'p':
    case 'Q':
    case 'q':
    case 'R':
    case '@': return 1; break;
    default: return 0; break;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    ans = 0;
    c = cin.get();
    while (c != '\n') {
        ans += chk(c);
        c = cin.get();
    }
    cout << ans;
}