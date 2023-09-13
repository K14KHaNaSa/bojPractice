#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w, h, l;
    char t;
    cin >> n;
    int g = 0;
    int won = 0;
    while (n--) {
        cin >> t >> w >> h >> l;
        if (t == 'A') {
            g += 1000 + ((w / 12) * (h / 12) * (l / 12)) * 500;
            won += ((w / 12) * (h / 12) * (l / 12)) * 4000;
        }
        else if (t == 'B')
            g += 6000;
    }
    cout << g << "\n" << won;
}