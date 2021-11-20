#include <iostream>
#include <cmath>
//#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int hap[801];
    for (int i = 0; i <= s1 + s2 + s3; i++) {
        hap[i] = 0;
    }
    for (int f1 = 1; f1 <= s1; f1++) {
        for (int f2 = 1; f2 <= s2; f2++) {
            for (int f3 = 1; f3 <= s3; f3++) {
                hap[f1 + f2 + f3] = hap[f1 + f2 + f3] + 1;
            }
        }
    }
    int mxc = 0, mxn;
    for (int i = 3; i <= s1 + s2 + s3; i++) {
        if (mxc < hap[i]) {
            mxc = hap[i];
            mxn = i;
        }
    }
    cout << mxn;
}