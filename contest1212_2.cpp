#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int u = 0;
    int o = 0;
    int s = 0;
    int p = 0;
    int c = 0;
    char uospc;
    int n;
    cin >> n;
    uospc = cin.get(); //\n dummy
    while (n--) {
        uospc = cin.get();
        if (uospc == 'u')
            u++;
        else if (uospc == 'o')
            o++;
        else if (uospc == 's')
            s++;
        else if (uospc == 'p')
            p++;
        else if (uospc == 'c')
            c++;
    }
    cout << min(min(min(min(u, o), s), p), c);
}