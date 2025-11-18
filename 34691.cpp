#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    while (s != "end") {
        if (s == "animal")
            cout << "Panthera tigris\n";
        if (s == "flower")
            cout << "Forsythia koreana\n";
        if (s == "tree")
            cout << "Pinus densiflora\n";
        cin >> s;
    }
}