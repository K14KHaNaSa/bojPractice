#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char club;
    club = cin.get();
    if (club == 'M') {
        cout << "MatKor";
    }
    else if (club == 'W') {
        cout << "WiCys";
    }
    else if (club == 'C') {
        cout << "CyKor";
    }
    else if (club == 'A') {
        cout << "AlKor";
    }
    else if (club == '$') {
        cout << "$clear";
    }
}