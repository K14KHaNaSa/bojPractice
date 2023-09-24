#include <iostream>
using namespace std;

char fhd[100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char fh;
    fh = cin.get();
    while (n--) {
        int hd = 0;
        while (fh == '\n')
            fh = cin.get();
        while (fh != '\n') {
            fhd[hd] = fh;
            hd++;
            fh = cin.get();
        }
        int ans = 0;
        hd = 0;
        while (fh == '\n')
            fh = cin.get();
        while (fh != '\n') {
            if (fhd[hd] != fh)
                ans++;
            hd++;
            fh = cin.get();
        }
        cout << "Hamming distance is " << ans << ".\n";
    }
}