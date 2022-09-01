#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char inp;
    bool u = false;
    bool uc = false;
    bool ucp = false;
    bool ucpc = false;
    cin.get(inp);
    while (inp != '\n') {
        if (!u && inp == 'U') {
            u = true;
        }
        else if (u && !uc && inp == 'C') {
            uc = true;
        }
        else if (uc && !ucp && inp == 'P') {
            ucp = true;
        }
        else if (ucp && inp == 'C') {
            ucpc = true;
        }
        cin.get(inp);
    }
    if (ucpc) {
        cout << "I love UCPC";
    }
    else {
        cout << "I hate UCPC";
    }
}