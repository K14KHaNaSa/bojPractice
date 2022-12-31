#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool kawaii = true;
	int k, left, right, minus; // 0 = 48 / \n = 10
	left = cin.get();
	right = cin.get();
	if (right != 10) {
		minus = left - right;
		k = cin.get();
		if (k != 10) {
			while (k != 10) {
				left = right;
				right = k;
				if (left - right != minus) {
					kawaii = false;
				}
				k = cin.get();
			}
		}
	}
	if (kawaii) {
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
	}
	else {
		cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
	}

	// 출력 결과 유니버셜 문자가 표현이 안됨 (채점 서버에서는 정상작동)
	// https://www.acmicpc.net/problem/17294 에서 정확히 확인 필요
}