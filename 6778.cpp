#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, e;
    cin >> a >> e;
    if (a >= 3 && e <= 4)
        cout << "TroyMartian\n";
    if (a <= 6 && e >= 2)
        cout << "VladSaturnian\n";
    if (a <= 2 && e <= 3)
        cout << "GraemeMercurian";
}