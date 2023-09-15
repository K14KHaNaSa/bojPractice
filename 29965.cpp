#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, p;
    cin >> n;
    char mj;
    long long int m = 0;
    long long int mc = 0;
    long long int j = 0;
    long long int jc = 0;
    while (n--) {
        cin >> mj >> p;
        if (mj == 'M') {
            m += p;
            mc++;
        }
        else {
            j += p;
            jc++;
        }
    }

    if (mc == 0) {
        if (j == 0)
            cout << "V";
        else
            cout << "J";
    }
    else if (jc == 0) {
        if (m == 0)
            cout << "V";
        else
            cout << "M";
    }
    else if (m * jc > j * mc)
        cout << "M";
    else if (m * jc < j * mc)
        cout << "J";
    else
        cout << "V";
}