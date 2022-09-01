#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, input;
    cin >> n;
    vector<int> arr(10001);
    for (int i = 0; i < n; i++) {
        cin >> input;
        arr[input]++;
    }
    for (int i = 1; i <= 10000; i++) {
        if (arr[i] != 0) {
            for (int j = 0; j < arr[i]; j++) {
                cout << i << "\n";
            }
        }
    }
}