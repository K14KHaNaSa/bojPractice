#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, string> pokedex;
    unordered_map<string, int> pokedex_no;
    int n, m;
    string pkmn;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> pkmn;
        pokedex.insert({ i, pkmn });
        pokedex_no.insert({ pkmn, i });
    }
    while (m--) {
        cin >> pkmn;
        if (isdigit(pkmn.front())) {
            cout << pokedex.at(stoi(pkmn));
        }
        else {
            cout << pokedex_no.at(pkmn);
        }
        cout << "\n";
    }
}