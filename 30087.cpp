#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "Algorithm")
            cout << "204\n";
        if (s == "DataAnalysis")
            cout << "207\n";
        if (s == "ArtificialIntelligence")
            cout << "302\n";
        if (s == "CyberSecurity")
            cout << "B101\n";
        if (s == "Network")
            cout << "303\n";
        if (s == "Startup")
            cout << "501\n";
        if (s == "TestStrategy")
            cout << "105\n";
    }
}