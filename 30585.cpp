#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w;
    int z = 0;
    int o = 0;
    cin >> h >> w;
    char zo;
    for (int i = 0; i < h; i++) {
        zo = cin.get();
        for (int j = 0; j < w; j++) {
            zo = cin.get();
            if (zo == '0')
                z++;
            if (zo == '1')
                o++;
        }
    }
    cout << min(z, o);
}