#include <iostream>
using namespace std;

int bt(string s) {
    if (s == "w")
        return 1;
    else // "."
        return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    string m, e;
    cin >> n >> m >> e;
    
    int b = 0;
    for (i = 0; i < n; i++)
        b += bt(m.substr(i, 1));
    for (i = 0; i < n; i++)
        b -= bt(e.substr(i, 1));
    if (m == e)
        cout << "Good";
    else if (b > 0)
        cout << "Oryang";
    else if (b < 0)
        cout << "Manners maketh man";
    else
        cout << "Its fine";
}