#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, p;
    cin >> n >> k >> p;
    int bb;
    int nc;
    int bundle = 0;
    while (n--) {
        nc = 0;
        for (int i = 0; i < k; i++) {
            cin >> bb;
            if (bb == 0)
                nc++;
        }
        if (nc < p)
            bundle++;
    }
    cout << bundle;
}