#include <iostream>
using namespace std;

char uospc[5] = { 'U', 'O', 'S', 'P', 'C' };
int n, i;
char s[300000];
unsigned long long int asum[5];
unsigned long long int a;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    for (i = 0; i < 5; i++)
        asum[i] = 10000000000;
    cin >> n;
    c = cin.get(); // \n
    for (i = 0; i < n; i++)
        s[i] = cin.get();
    for (i = 0; i < n; i++) {
        cin >> a;
        for (int j = 0; j < 5; j++) {
            if (s[i] == uospc[j]) {
                if (j > 0) {
                    asum[j] = min(asum[j], asum[j - 1] + a);
                }
                else {
                    asum[0] = min(asum[0], a);
                }
            }
        }
    }
    (asum[4] > 5000000000) ? cout << -1 : cout << asum[4];
}