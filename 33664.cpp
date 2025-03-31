#include <iostream>
using namespace std;

long long int n, m, b, i;
long long int price[2800];
string item_name[2800];
string s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> b >> n >> m;
    for (i = 0; i < n; i++)
        cin >> item_name[i] >> price[i];
    while (m--) {
        cin >> s;
        for (i = 0; i < n; i++) {
            if (item_name[i] == s)
                b -= price[i];
        }
    }
    b < 0 ? cout << "unacceptable" : cout << "acceptable";
}