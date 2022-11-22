#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sumlength = 0;
    int x, y, n, dr, ds;
    cin >> x >> y >> n;
    vector<int> dir(n);
    vector<int> dis(n);
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dis[i];
    }
    cin >> dr >> ds;
    for (int i = 0; i < n; i++) {
        if (dir[i] == dr) {
            sumlength += max(dis[i] - ds, ds - dis[i]);
        }
        else {
            if (dr == 1) {
                if (dir[i] == 2) {
                    sumlength += y + min(dis[i] + ds, (x - dis[i]) + (x - ds));
                }
                else if (dir[i] == 3) {
                    sumlength += ds + dis[i];
                }
                else if (dir[i] == 4) {
                    sumlength += x - ds + dis[i];
                }
            }
            else if (dr == 2) {
                if (dir[i] == 1) {
                    sumlength += y + min(dis[i] + ds, (x - dis[i]) + (x - ds));
                }
                else if (dir[i] == 3) {
                    sumlength += ds + y - dis[i];
                }
                else if (dir[i] == 4) {
                    sumlength += x - ds + y - dis[i];
                }
            }
            else if (dr == 3) {
                if (dir[i] == 4) {
                    sumlength += x + min(dis[i] + ds, (y - dis[i]) + (y - ds));
                }
                else if (dir[i] == 1) {
                    sumlength += ds + dis[i];
                }
                else if (dir[i] == 2) {
                    sumlength += y - ds + dis[i];
                }
            }
            else if (dr == 4) {
                if (dir[i] == 3) {
                    sumlength += x + min(dis[i] + ds, (y - dis[i]) + (y - ds));
                }
                else if (dir[i] == 1) {
                    sumlength += ds + x - dis[i];
                }
                else if (dir[i] == 2) {
                    sumlength += y - ds + x - dis[i];
                }
            }
        }
    }
    cout << sumlength;
}