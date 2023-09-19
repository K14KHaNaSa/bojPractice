#include <iostream>
using namespace std;

char arr[10][10];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d;
    cin >> n >> d;
    char a;
    for (int i = 0; i < n; i++) {
        a = cin.get();
        for (int j = 0; j < n; j++) {
            a = cin.get();
            arr[i][j] = a;
        }
    }
    if (d == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 'd')
                    cout << "q";
                if (arr[i][j] == 'b')
                    cout << "p";
                if (arr[i][j] == 'q')
                    cout << "d";
                if (arr[i][j] == 'p')
                    cout << "b";
            }
            cout << "\n";
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 'd')
                    cout << "b";
                if (arr[i][j] == 'b')
                    cout << "d";
                if (arr[i][j] == 'q')
                    cout << "p";
                if (arr[i][j] == 'p')
                    cout << "q";
            }
            cout << "\n";
        }
    }
}