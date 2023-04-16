#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	int l, m, s;
	cin >> a >> b >> c;
	if(a>=b && a>=c){
		l = a;
		if (b >= c) {
			m = b;
			s = c;
		}
		else {
			m = c;
			s = b;
		}
	}
	else if (b >= a && b >= c) {
		l = b;
		if (a >= c) {
			m = a;
			s = c;
		}
		else {
			s = a;
			m = c;
		}
	}
	else if (c >= a && c >= b) {
		l = c;
		if (a >= b) {
			m = a;
			s = b;
		}
		else {
			s = a;
			m = b;
		}
	}
	if (l >= m + s) {
		l = m + s - 1;
	}
	cout << l + m + s;
}