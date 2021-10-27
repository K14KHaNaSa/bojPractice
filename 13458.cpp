#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, b, c;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b >> c;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= b) {
            sum++;
        }
        else {
            if ((a[i] - b) % c == 0) {
                sum = sum + (a[i] - b) / c;
            }
            else {
                sum = sum + 1 + (a[i] - b) / c;
            }
            sum++;
        }  
        /*if ((a[i] - b) > 0) {
            sum = sum + (a[i] - b) / c;
        }
        if (((a[i] - b) % c) > 0) {
            sum = sum++;
        }*/
    }
    cout << sum;
    //cout << sum + n << endl;
}