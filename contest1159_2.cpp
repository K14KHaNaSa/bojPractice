#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 2; i <= n; i=i+2)
        cout << i << " ";
    if (n % 2 == 0)
        n--;
    for (int i = n; i > 0; i = i - 2)
        cout << i << " ";
}