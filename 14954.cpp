#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, temp; // 1 or 7 = hammp
    cin >> n;
    while(true) {
        temp = 0;
        while (n > 0) {         
            temp += (n % 10) * (n % 10);
            n /= 10;            
        }
        n = temp;
        if (n < 10) {
            (n == 1 || n == 7) ? cout << "HAPPY" : cout << "UNHAPPY";
            return 0;
        }
    }
}