#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int te, ts, tm, e, s, m;
	int answer = 0;
	cin >> te >> ts >> tm;
	e = 0;
	s = 0;
	m = 0;
	while (!(te == e && ts == s && tm == m)) {
		e++;
		s++;
		m++;
		if (e > 15) {
			e = 1;
		}
		if (s > 28) {
			s = 1;
		}
		if (m > 19) {
			m = 1;
		}
		answer++;
	}
	cout << answer;
}