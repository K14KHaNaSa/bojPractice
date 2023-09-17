#include <iostream>
#include <cmath>
using namespace std;

char color[100];
char map[100][100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, n, k, pu, pv;
    char in;
    cin >> i >> n >> k;
    in = cin.get();
    for (int j = 0; j < i; j++) {
        in = cin.get();
        color[j] = in;
    }
    for (int u = 0; u < n; u++) {
        in = cin.get();
        for (int v = 0; v < n; v++) {
            in = cin.get();
            if (in == '@') {
                pu = u;
                pv = v;
                map[u][v] = '.';
            }
            else
                map[u][v] = in;
        }
    }
    in = cin.get();
    int ink = 0;
    int jumpcount = 0;
    for (int j = 0; j < k; j++) {
        in = cin.get();
        if (in == 'j')
            ink++;
        else if (in == 'U') {
            if (pu > 0 && map[pu - 1][pv] == '.')
                pu--;
        }
        else if (in == 'D') {
            if (pu < n - 1 && map[pu + 1][pv] == '.')
                pu++;
        }
        else if (in == 'L') {
            if (pv > 0 && map[pu][pv - 1] == '.')
                pv--;
        }
        else if (in == 'R') {
            if (pv < n - 1 && map[pu][pv + 1] == '.')
                pv++;
        }
        else if (in == 'J') {
            //jump
            for (int u = max(0, pu - ink); u < min(n, pu + ink + 1); u++) {
                for (int v = max(0, (pv - ink + abs(pu - u))); v < min(n, (pv + ink - abs(pu - u) + 1)); v++) {
                    if (map[u][v] != '.')
                        map[u][v] = color[jumpcount % i];
                }
            }
            jumpcount++;
            ink = 0;
        }
    }
    map[pu][pv] = '@';
    for (int u = 0; u < n; u++) {
        for (int v = 0; v < n; v++) {
            cout << map[u][v];
        }
        cout << "\n";
    }
}