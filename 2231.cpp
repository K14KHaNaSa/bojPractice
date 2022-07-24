#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	unsigned int n, bhh, ssg;
	cin >> n;
	ssg = 0;
	for (int i = n; i > 0; i--) {
		bhh = (i + i / 1000000 + (i % 1000000) / 100000 + (i % 100000) / 10000 + (i % 10000) / 1000
			+ (i % 1000) / 100 + (i % 100) / 10 + i % 10);
		if (bhh == n) {
			ssg = i;
		}
	}
	cout << ssg;
}