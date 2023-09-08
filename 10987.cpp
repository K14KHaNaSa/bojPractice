#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int aeiou = 0;
    char str;
    str = cin.get();
    while (str >= 'a' && str <= 'z') {
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
            aeiou++;
        str = cin.get();
    }
    cout << aeiou;
}