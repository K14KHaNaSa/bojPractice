#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string yodaone, yodatwo;
    string yoda;
    char brfind;
    cin >> n;
    while (n--) {
        queue<string> full;
        brfind = 'a';
        cin >> yodaone >> yodatwo;
        while (brfind!='\n') {
            cin >> yoda;
            full.push(yoda);
            brfind = cin.get();
        }
        while (!full.empty()) {
            cout << full.front() << " ";
            full.pop();
        }
        cout << yodaone << " " << yodatwo << "\n";
    }
}