#include <iostream>
using namespace std;

long long int n, k, c, r, l;
long long int b[100001];
long long int s[100001];
long long int p[100001];
long long int skill[100001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k >> c >> r;
    for (int i = 1; i <= k; i++)
        skill[i] = 0;
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    for (int i = 1; i <= k; i++)
        cin >> s[i];
    for (int i = 1; i <= k; i++)
        cin >> p[i];
    long long int combo = 0;
    long long int stardust = 0;
    long long int stress = 0;
    while (n--) {
        cin >> l;
        if (l == 0 && stardust > -1) { //rest
            stress = max(stress - r, r - r);
            combo = 0;
        }
        else if (stardust > -1) {
            stardust += (b[l] * (100 + combo * c) * (100 + s[l] * skill[l])) / 10000;
            skill[l]++;
            combo++;
            stress += p[l];
            if (stress > 100)
                stardust = -1;
        }
    }
    cout << stardust;
}