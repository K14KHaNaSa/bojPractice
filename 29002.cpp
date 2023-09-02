#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, f;
    long long int sum = 0;
    queue<long long int> enemy;
    cin >> n;
    while (n--) {
        cin >> f;
        enemy.push(f);
        sum += f;
    }
    while (!enemy.empty()) {
        if (enemy.front() != sum / 2) {
            cout << enemy.front() << " ";
        }
        enemy.pop();
    }
    cout << sum / 2;
}