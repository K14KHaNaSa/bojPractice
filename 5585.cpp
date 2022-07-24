#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, jd;
	cin >> n;
	jd = 0;
	n = 1000 - n;
	while (n > 0) {
		if (n >= 500) {
			jd++;
			n -= 500;
		}
		else if(n >= 100) {
			jd++;
			n -= 100;
		}
		else if (n >= 50) {
			jd++;
			n -= 50;
		}
		else if (n >= 10) {
			jd++;
			n -= 10;
		}
		else if (n >= 5) {
			jd++;
			n -= 5;
		}
		else {
			jd++;
			n -= 1;
		}
	}
	cout << jd;
}