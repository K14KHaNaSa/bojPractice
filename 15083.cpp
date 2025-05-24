#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<double> p;
    priority_queue<double> c;
    double pi, psum, c1, ans1, ans2, ci;
    psum = 0;;
    for (int i = 0; i < 3; i++) {
        cin >> pi;
        p.push(pi);
        psum += pi;
    }
    cin >> c1;
    for (int i = 0; i < 2; i++) {
        cin >> ci;
        c.push(ci);
    }
    ans1 = psum * (100 - c1) / 100;
    ans2 = 0;
    ans2 += p.top() * (100 - c.top()) / 100;
    p.pop();
    c.pop();
    ans2 += p.top() * (100 - c.top()) / 100;
    p.pop();
    ans2 += p.top();
    (ans1 < ans2) ?
        cout << fixed << setprecision(2) << "one " << psum - ans1 :
        cout << fixed << setprecision(2) << "two " << psum - ans2;
}