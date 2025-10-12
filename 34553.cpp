#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s;
    int combo = 0;
    int ans = 0;
    char pre = 'a' - 1;
    s = cin.get();
    
    while (s != '\n') {
        if (s - pre > 0)
            combo++;
        else 
            combo = 1;
        ans += combo;
        pre = s;
        s = cin.get();
    }
    cout << ans;
}