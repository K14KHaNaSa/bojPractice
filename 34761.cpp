#include <iostream>
using namespace std;

int n;
int a[200000];
bool ae[200000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ai, i;
    cin >> n;
    bool ans = true;
    for (i = 0; i < n; i++)
        ae[i] = false;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        ae[a[i] - 1] = true;
    }
    for (i = 0; i < n; i++) {
        cin >> ai;
        if (ai != a[i])
            ans = false;
    }
    for (i = 0; i < n; i++) {
        cin >> ai; // in fact here is bi
        if (!ae[ai - 1])
            ans = false;
    }
    ans ? cout << "YES" : cout << "NO";
}