#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char s;
    cin >> n;
    bool abcde[5];
    for (int i = 0; i < 5; i++)
        abcde[i] = false;
    s = cin.get(); // \n dummy
    while (n--) {
        s = cin.get();
        abcde[s - 'A'] = true;
    }
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        if (abcde[i])
            ans++;
    }
    if (ans > 2 ? cout << "Yes" : cout << "No");
}