#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    long long int a, sum = 0;
    priority_queue<long long int> cls;
    while (n--) {
        cin >> a;
        sum += a;
        cls.push(sum);
    }
    sum = 0;
    while (k--) {
        sum += cls.top();
        cls.pop();
    }
    cout << sum;
}