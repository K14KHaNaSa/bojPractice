#include <iostream>
using namespace std;

int main() {
    int c[8], b, a = 0;
    for (int i = 0; i < 8; i++) {
        cin >> c[i];
        if (i > 0) {
            switch (c[i] - c[i - 1]) {
            case 1: a++; break;
            case -1: a--; break;
            }
        }
    }
    switch (a) {
    case 7: cout << "ascending"; break;
    case -7: cout << "descending"; break;
    default: cout << "mixed";
    }
}