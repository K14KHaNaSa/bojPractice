#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    while (n > 1) {
        for (int i = 0; i < n / 2; i++) {
            arr[i] = arr[i * 2 + 1];
        }
        n /= 2;
    }
    cout << arr[0];
}