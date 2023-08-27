#include <iostream>
using namespace std;

long long int clue[4]; // { L , D , U , R }
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, x, y;
    char d;
    cin >> n;
    clue[0] = -1000000001;
    clue[1] = -1000000001;
    clue[2] = 1000000001;
    clue[3] = 1000000001;
    while (n--) {
        cin >> x >> y >> d;
        if (d == 'L') {
            clue[3] = min(clue[3], x - 1);
        }
        else if (d == 'R') {
            clue[0] = max(clue[0], x + 1);
        }
        else if (d == 'U') {
            clue[1] = max(clue[1], y + 1);
        }
        else if (d == 'D') {
            clue[2] = min(clue[2], y - 1);
        }
    }
    if (min(clue[0], clue[1]) < -1000000000 ||
        max(clue[2], clue[3]) > 1000000000) {
        cout << "Infinity";
    }
    else {
        cout << (clue[3] - clue[0] + 1) * (clue[2] - clue[1] + 1);
    }
}