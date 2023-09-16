#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    cin >> n;
    int longest = 0;
    int str = 0;
    while (n--) {
        cin >> s;
        if (s > 0) {
            str++;
            if (str > longest) {
                longest = str;
            }
        }
        else {
            str = 0;
        }
    }
    cout << longest;
}