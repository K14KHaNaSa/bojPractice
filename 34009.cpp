#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a;
    (n % 2 == 0) ? cout << "Alice" : cout << "Bob";
}