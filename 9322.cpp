#include <iostream>
using namespace std;

string key[1000];
int order[1000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    string s_key;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> key[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> s_key;
            for (int j = 0; j < n; j++) {
                if (s_key == key[j]) {
                    order[j] = i;
                    j = n;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cin >> key[i];
        }
        for (int i = 0; i < n; i++) {
            cout << key[order[i]] << " ";
        }
        cout << "\n";
    }
}