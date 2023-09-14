#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> az(27);
    int n;
    cin >> n;
    char s;
    s = cin.get();
    while (n--) {
        s = cin.get();
        az[s - 'A']++;
    }
    cout << min(az[1], min(az[17] / 2, min(az[14], min(az[13], min(az[25], min(az[4] / 2, min(az[18], min(az[8], min(az[11], az[21])))))))));
}