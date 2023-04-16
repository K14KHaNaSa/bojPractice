#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double minmin;
    double mintwo;
    double npt;
    int n;
    cin >> n;
    cin >> minmin;
    cin >> mintwo;
    if (mintwo < minmin) {
        double tmp = minmin;
        minmin = mintwo;
        mintwo = tmp;
    }
    n -= 2;
    while (n--) {
        cin >> npt;
        if (npt < minmin) {
            mintwo = minmin;
            minmin = npt;
        }
        else if (npt < mintwo) {
            mintwo = npt;
        }
    }
    cout << fixed << setprecision(2) << mintwo;
}
