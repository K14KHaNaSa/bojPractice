#include <iostream>
#include <vector>
using namespace std;

bool p[318138];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> pp;
    int t, n;
    for (int i = 0; i < 318138; i++)
        p[i] = true;
    p[0] = false;
    p[1] = false;
    for (int i = 2; i < 318138; i++) {
        if (p[i]) {
            for (int j = i * 2; j < 318138; j = j + i)
                p[j] = false;
        }
    }
    int p_count = 1;
    for (int i = 2; i < 318138; i++) {
        if (p[i]) {
            if (p[p_count])
                pp.push_back(i);
            p_count++;
        }
    }
    cin >> t;
    while (t--) {
        cin >> n;
        cout << pp[n - 1] << "\n";
    }
}