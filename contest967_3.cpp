#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, magic, answer;
    cin >> n;
    if (n < 2) {
        cout << n;
    }
    else {
        magic = 2;
        answer = 2;
        while (n > magic) {
            magic *= 2;
            answer++;
        }
        cout << answer;
    }
}