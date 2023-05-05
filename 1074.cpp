#include <iostream>
#include <cmath>
using namespace std;

int n, r, c, answer;

void z(int n) {
	if (n == 0) {
		cout << answer;
	}
	else {
		int pnum = pow(2, n - 1);
		if (r < pnum && c < pnum) {
			//left up
			z(n - 1);
		}
		else if (r < pnum) {
			//right up
			c -= pnum;
			answer += pnum * pnum;
			z(n - 1);
		}
		else if (c < pnum) {
			//left down
			r -= pnum;
			answer += pnum * pnum * 2;
			z(n - 1);
		}
		else {
			//right down
			r -= pnum;
			c -= pnum;
			answer += pnum * pnum * 3;
			z(n - 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> r >> c;
	answer = 0;
	z(n);
}