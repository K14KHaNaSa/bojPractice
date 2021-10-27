#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3], temp;
    cin >> a[0] >> a[1] >> a[2];
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    
    cout << a[0] << " " << a[1] << " " << a[2];
}