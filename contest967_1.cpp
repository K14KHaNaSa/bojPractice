#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    if (n * 100 >= m) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}