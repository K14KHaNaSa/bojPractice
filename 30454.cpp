#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;
    char o;
    int ansline = 0;
    int ansobj = 0;
    for (int i = 0; i < n; i++) {
        o = cin.get(); // \n dummy
        bool line = false;
        int this_line = 0;
        for (int j = 0; j < l; j++) {
            o = cin.get();
            if (!line && o == '1')
                line = true;
            else if (line && o == '0') {
                line = false;
                this_line++;
            }
        }
        if (line)
            this_line++;
        if (ansline < this_line) {
            ansline = this_line;
            ansobj = 1;
        }
        else if (ansline == this_line)
            ansobj++;
    }
    cout << ansline << " " << ansobj;
}