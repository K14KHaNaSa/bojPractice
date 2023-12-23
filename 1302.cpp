#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<string> book(n);
    for (int i = 0; i < n; i++)
        cin >> book[i];
    sort(book.begin(), book.end());
    int ans = 1;
    int now = 1;
    string ansbook = book[0];
    for (int i = 1; i < n; i++) {
        if (book[i] == book[i - 1])
            now++;
        else {
            if (now > ans) {
                ans = now;
                ansbook = book[i - 1];
            }
            now = 1;
        }
    }
    if (now > ans) {
        ans = now;
        ansbook = book[n - 1];
    }
    cout << ansbook;
}