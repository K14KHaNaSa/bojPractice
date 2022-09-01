#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int now = 2;
    int n, milk;
    cin >> n;
    int drink = 0;
    for (int i = 0; i < n; i++) {
        cin >> milk;
        switch(now) {
        case 0: if (milk == 1) {
            drink++;
            now = 1;
        }
              break;
        case 1: if (milk == 2) {
            drink++;
            now = 2;
        }
            break;
        case 2: if (milk == 0) {
            drink++;
            now = 0;
        }
              break;
        }
    }
    cout << drink;
}