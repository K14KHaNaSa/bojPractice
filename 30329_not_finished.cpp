#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s;
    char kick = '.';
    int ans = 0;
    s = cin.get();
    while (s != EOF) {
        if (s == 'k') {
            if (kick == 'c')
                ans++;
            kick = 'k';
        }
        else if (s == 'i' && kick == 'k')
            kick = 'i';
        else if (s == 'c' && kick == 'i')
            kick = 'c';
        s = cin.get();
    }
    cout << ans;
}