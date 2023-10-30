#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> abc(3);
    for (int i = 0; i < 3; i++)
        cin >> abc[i];
    sort(abc.begin(), abc.end());
    char c;
    c = cin.get(); // \n
    for (int i = 0; i < 3; i++) {
        c = cin.get();
        cout << abc[int(c - 'A')] << " ";
    }
}