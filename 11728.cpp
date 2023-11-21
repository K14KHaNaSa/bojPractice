#include <iostream>
using namespace std;

int n, m, b;
int a[1000000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cursor = 0;
    while (m--) {
        cin >> b;
        while (cursor < n && a[cursor] <= b) {
            cout << a[cursor] << " ";
            cursor++;
        }
        cout << b << " ";
    }
    while (cursor < n) {
        cout << a[cursor] << " ";
        cursor++;
    }
}