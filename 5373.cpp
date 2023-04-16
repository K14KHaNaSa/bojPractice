#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string orders;
    int tc, n;
    cin >> tc;
    char temp[5][5];
    while (tc--) {
        cin >> n;
        char up[3][3];
        char front[3][3];
        char left[3][3];
        char right[3][3];
        char back[3][3];
        char down[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                up[i][j] = 'w';
                down[i][j] = 'y';
                front[i][j] = 'r';
                back[i][j] = 'o';
                left[i][j] = 'g';
                right[i][j] = 'b';
                // 각 면을 정면으로 보았을때 기준
                // down(바닥)면은 front(정면)에 붙은 면이 0열 / left(좌측)에 0행 / right(우측)에 2행
            }
        }
        while (n--) {
            cin >> orders; // 회전하는 면의 정면을 보았을 때, 회전 측면을 옆 면에 붙인 뒤 회전연산
            if (orders == "U+" || orders == "U-") { // Up-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = up[i][j];
                    }
                }
                temp[0][1] = back[0][2];
                temp[0][2] = back[0][1];
                temp[0][3] = back[0][0];
                temp[1][0] = left[0][0];
                temp[2][0] = left[0][1];
                temp[3][0] = left[0][2];
                temp[1][4] = right[0][2];
                temp[2][4] = right[0][1];
                temp[3][4] = right[0][0];
                temp[4][1] = front[0][0];
                temp[4][2] = front[0][1];
                temp[4][3] = front[0][2];
                if (orders == "U+") {
                    up[0][0] = temp[3][1];
                    up[0][1] = temp[2][1];
                    up[0][2] = temp[1][1];
                    up[1][0] = temp[3][2];
                    up[1][2] = temp[1][2];
                    up[2][0] = temp[3][3];
                    up[2][1] = temp[2][3];
                    up[2][2] = temp[1][3];
                    left[0][0] = temp[4][1];
                    left[0][1] = temp[4][2];
                    left[0][2] = temp[4][3];
                    back[0][0] = temp[1][0];
                    back[0][1] = temp[2][0];
                    back[0][2] = temp[3][0];
                    front[0][0] = temp[3][4];
                    front[0][1] = temp[2][4];
                    front[0][2] = temp[1][4];
                    right[0][0] = temp[0][3];
                    right[0][1] = temp[0][2];
                    right[0][2] = temp[0][1];
                }
                else if (orders == "U-") {
                    up[0][0] = temp[1][3];
                    up[0][1] = temp[2][3];
                    up[0][2] = temp[3][3];
                    up[1][0] = temp[1][2];
                    up[1][2] = temp[3][2];
                    up[2][0] = temp[1][1];
                    up[2][1] = temp[2][1];
                    up[2][2] = temp[3][1];
                    left[0][0] = temp[0][3];
                    left[0][1] = temp[0][2];
                    left[0][2] = temp[0][1];
                    back[0][0] = temp[3][4];
                    back[0][1] = temp[2][4];
                    back[0][2] = temp[1][4];
                    front[0][0] = temp[1][0];
                    front[0][1] = temp[2][0];
                    front[0][2] = temp[3][0];
                    right[0][0] = temp[4][1];
                    right[0][1] = temp[4][2];
                    right[0][2] = temp[4][3];
                }
            }
            else if (orders == "D+" || orders == "D-") { // Down-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = down[i][j];
                    }
                }
                temp[0][1] = front[2][0];
                temp[0][2] = front[2][1];
                temp[0][3] = front[2][2];
                temp[1][0] = left[2][2];
                temp[2][0] = left[2][1];
                temp[3][0] = left[2][0];
                temp[1][4] = right[2][0];
                temp[2][4] = right[2][1];
                temp[3][4] = right[2][2];
                temp[4][1] = back[2][2];
                temp[4][2] = back[2][1];
                temp[4][3] = back[2][0];
                if (orders == "D+") {
                    down[0][0] = temp[3][1];
                    down[0][1] = temp[2][1];
                    down[0][2] = temp[1][1];
                    down[1][0] = temp[3][2];
                    down[1][2] = temp[1][2];
                    down[2][0] = temp[3][3];
                    down[2][1] = temp[2][3];
                    down[2][2] = temp[1][3];
                    left[2][0] = temp[4][3];
                    left[2][1] = temp[4][2];
                    left[2][2] = temp[4][1];
                    back[2][0] = temp[1][4];
                    back[2][1] = temp[2][4];
                    back[2][2] = temp[3][4];
                    front[2][0] = temp[3][0];
                    front[2][1] = temp[2][0];
                    front[2][2] = temp[1][0];
                    right[2][0] = temp[0][1];
                    right[2][1] = temp[0][2];
                    right[2][2] = temp[0][3];
                }
                else if (orders == "D-") {
                    down[0][0] = temp[1][3];
                    down[0][1] = temp[2][3];
                    down[0][2] = temp[3][3];
                    down[1][0] = temp[1][2];
                    down[1][2] = temp[3][2];
                    down[2][0] = temp[1][1];
                    down[2][1] = temp[2][1];
                    down[2][2] = temp[3][1];
                    left[2][0] = temp[0][1];
                    left[2][1] = temp[0][2];
                    left[2][2] = temp[0][3];
                    back[2][0] = temp[3][0];
                    back[2][1] = temp[2][0];
                    back[2][2] = temp[1][0];
                    front[2][0] = temp[1][4];
                    front[2][1] = temp[2][4];
                    front[2][2] = temp[3][4];
                    right[2][0] = temp[4][3];
                    right[2][1] = temp[4][2];
                    right[2][2] = temp[4][1];
                }
            }
            else if (orders == "F+" || orders == "F-") { // Front-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = front[i][j];
                    }
                }
                temp[0][1] = up[2][0];
                temp[0][2] = up[2][1];
                temp[0][3] = up[2][2];
                temp[1][0] = left[0][2];
                temp[2][0] = left[1][2];
                temp[3][0] = left[2][2];
                temp[1][4] = right[0][0];
                temp[2][4] = right[1][0];
                temp[3][4] = right[2][0];
                temp[4][1] = down[0][0];
                temp[4][2] = down[0][1];
                temp[4][3] = down[0][2];
                if (orders == "F+") {
                    front[0][0] = temp[3][1];
                    front[0][1] = temp[2][1];
                    front[0][2] = temp[1][1];
                    front[1][0] = temp[3][2];
                    front[1][2] = temp[1][2];
                    front[2][0] = temp[3][3];
                    front[2][1] = temp[2][3];
                    front[2][2] = temp[1][3];
                    left[0][2] = temp[4][1];
                    left[1][2] = temp[4][2];
                    left[2][2] = temp[4][3];
                    down[0][0] = temp[3][4];
                    down[0][1] = temp[2][4];
                    down[0][2] = temp[1][4];
                    up[2][0] = temp[3][0];
                    up[2][1] = temp[2][0];
                    up[2][2] = temp[1][0];
                    right[0][0] = temp[0][1];
                    right[1][0] = temp[0][2];
                    right[2][0] = temp[0][3];
                }
                else if (orders == "F-") {
                    front[0][0] = temp[1][3];
                    front[0][1] = temp[2][3];
                    front[0][2] = temp[3][3];
                    front[1][0] = temp[1][2];
                    front[1][2] = temp[3][2];
                    front[2][0] = temp[1][1];
                    front[2][1] = temp[2][1];
                    front[2][2] = temp[3][1];
                    left[0][2] = temp[0][3];
                    left[1][2] = temp[0][2];
                    left[2][2] = temp[0][1];
                    down[0][0] = temp[1][0];
                    down[0][1] = temp[2][0];
                    down[0][2] = temp[3][0];
                    up[2][0] = temp[1][4];
                    up[2][1] = temp[2][4];
                    up[2][2] = temp[3][4];
                    right[0][0] = temp[4][3];
                    right[1][0] = temp[4][2];
                    right[2][0] = temp[4][1];
                }
            }
            else if (orders == "B+" || orders == "B-") { // Back-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = back[i][j];
                    }
                }
                temp[0][1] = up[0][2];
                temp[0][2] = up[0][1];
                temp[0][3] = up[0][0];
                temp[1][0] = right[0][2];
                temp[2][0] = right[1][2];
                temp[3][0] = right[2][2];
                temp[1][4] = left[0][0];
                temp[2][4] = left[1][0];
                temp[3][4] = left[2][0];
                temp[4][1] = down[2][2];
                temp[4][2] = down[2][1];
                temp[4][3] = down[2][0];
                if (orders == "B+") {
                    back[0][0] = temp[3][1];
                    back[0][1] = temp[2][1];
                    back[0][2] = temp[1][1];
                    back[1][0] = temp[3][2];
                    back[1][2] = temp[1][2];
                    back[2][0] = temp[3][3];
                    back[2][1] = temp[2][3];
                    back[2][2] = temp[1][3];
                    left[0][0] = temp[0][1];
                    left[1][0] = temp[0][2];
                    left[2][0] = temp[0][3];
                    down[2][0] = temp[1][4];
                    down[2][1] = temp[2][4];
                    down[2][2] = temp[3][4];
                    up[0][0] = temp[1][0];
                    up[0][1] = temp[2][0];
                    up[0][2] = temp[3][0];
                    right[0][2] = temp[4][1];
                    right[1][2] = temp[4][2];
                    right[2][2] = temp[4][3];
                }
                else if (orders == "B-") {
                    back[0][0] = temp[1][3];
                    back[0][1] = temp[2][3];
                    back[0][2] = temp[3][3];
                    back[1][0] = temp[1][2];
                    back[1][2] = temp[3][2];
                    back[2][0] = temp[1][1];
                    back[2][1] = temp[2][1];
                    back[2][2] = temp[3][1];
                    left[0][0] = temp[4][3];
                    left[1][0] = temp[4][2];
                    left[2][0] = temp[4][1];
                    down[2][0] = temp[3][0];
                    down[2][1] = temp[2][0];
                    down[2][2] = temp[1][0];
                    up[0][0] = temp[3][4];
                    up[0][1] = temp[2][4];
                    up[0][2] = temp[1][4];
                    right[0][2] = temp[0][3];
                    right[1][2] = temp[0][2];
                    right[2][2] = temp[0][1];
                }
            }
            else if (orders == "L+" || orders == "L-") { // Left-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = left[i][j];
                    }
                }
                temp[0][1] = up[0][0];
                temp[0][2] = up[1][0];
                temp[0][3] = up[2][0];
                temp[1][0] = back[0][2];
                temp[2][0] = back[1][2];
                temp[3][0] = back[2][2];
                temp[1][4] = front[0][0];
                temp[2][4] = front[1][0];
                temp[3][4] = front[2][0];
                temp[4][1] = down[2][0];
                temp[4][2] = down[1][0];
                temp[4][3] = down[0][0];
                if (orders == "L+") {
                    left[0][0] = temp[3][1];
                    left[0][1] = temp[2][1];
                    left[0][2] = temp[1][1];
                    left[1][0] = temp[3][2];
                    left[1][2] = temp[1][2];
                    left[2][0] = temp[3][3];
                    left[2][1] = temp[2][3];
                    left[2][2] = temp[1][3];
                    back[0][2] = temp[4][1];
                    back[1][2] = temp[4][2];
                    back[2][2] = temp[4][3];
                    down[0][0] = temp[1][4];
                    down[1][0] = temp[2][4];
                    down[2][0] = temp[3][4];
                    up[0][0] = temp[3][0];
                    up[1][0] = temp[2][0];
                    up[2][0] = temp[1][0];
                    front[0][0] = temp[0][1];
                    front[1][0] = temp[0][2];
                    front[2][0] = temp[0][3];
                }
                else if (orders == "L-") {
                    left[0][0] = temp[1][3];
                    left[0][1] = temp[2][3];
                    left[0][2] = temp[3][3];
                    left[1][0] = temp[1][2];
                    left[1][2] = temp[3][2];
                    left[2][0] = temp[1][1];
                    left[2][1] = temp[2][1];
                    left[2][2] = temp[3][1];
                    back[0][2] = temp[0][3];
                    back[1][2] = temp[0][2];
                    back[2][2] = temp[0][1];
                    down[0][0] = temp[3][0];
                    down[1][0] = temp[2][0];
                    down[2][0] = temp[1][0];
                    up[0][0] = temp[1][4];
                    up[1][0] = temp[2][4];
                    up[2][0] = temp[3][4];
                    front[0][0] = temp[4][3];
                    front[1][0] = temp[4][2];
                    front[2][0] = temp[4][1];
                }
            }
            else if (orders == "R+" || orders == "R-") { // Right-side
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        temp[i + 1][j + 1] = right[i][j];
                    }
                }
                temp[0][1] = up[2][2];
                temp[0][2] = up[1][2];
                temp[0][3] = up[0][2];
                temp[1][0] = front[0][2];
                temp[2][0] = front[1][2];
                temp[3][0] = front[2][2];
                temp[1][4] = back[0][0];
                temp[2][4] = back[1][0];
                temp[3][4] = back[2][0];
                temp[4][1] = down[0][2];
                temp[4][2] = down[1][2];
                temp[4][3] = down[2][2];
                if (orders == "R+") {
                    right[0][0] = temp[3][1];
                    right[0][1] = temp[2][1];
                    right[0][2] = temp[1][1];
                    right[1][0] = temp[3][2];
                    right[1][2] = temp[1][2];
                    right[2][0] = temp[3][3];
                    right[2][1] = temp[2][3];
                    right[2][2] = temp[1][3];
                    back[0][0] = temp[0][1];
                    back[1][0] = temp[0][2];
                    back[2][0] = temp[0][3];
                    down[0][2] = temp[3][4];
                    down[1][2] = temp[2][4];
                    down[2][2] = temp[1][4];
                    up[0][2] = temp[1][0];
                    up[1][2] = temp[2][0];
                    up[2][2] = temp[3][0];
                    front[0][2] = temp[4][1];
                    front[1][2] = temp[4][2];
                    front[2][2] = temp[4][3];
                }
                else if (orders == "R-") {
                    right[0][0] = temp[1][3];
                    right[0][1] = temp[2][3];
                    right[0][2] = temp[3][3];
                    right[1][0] = temp[1][2];
                    right[1][2] = temp[3][2];
                    right[2][0] = temp[1][1];
                    right[2][1] = temp[2][1];
                    right[2][2] = temp[3][1];
                    back[0][0] = temp[4][3];
                    back[1][0] = temp[4][2];
                    back[2][0] = temp[4][1];
                    down[0][2] = temp[1][0];
                    down[1][2] = temp[2][0];
                    down[2][2] = temp[3][0];
                    up[0][2] = temp[3][4];
                    up[1][2] = temp[2][4];
                    up[2][2] = temp[1][4];
                    front[0][2] = temp[0][3];
                    front[1][2] = temp[0][2];
                    front[2][2] = temp[0][1];
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << up[i][j];
            }
            cout << "\n";
        }
    }
}