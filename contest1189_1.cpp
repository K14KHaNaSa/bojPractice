#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string nm;
    vector<string> three;
    cin >> n;
    while (n--) {
        cin >> nm;
        if (nm.length() == 3) {
            three.push_back(nm);
        }
    }
    sort(three.begin(), three.end());
    cout << three[0];
}