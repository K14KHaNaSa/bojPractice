#include <iostream>
#include <cmath>
using namespace std;

int nm[10];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a; // -48
	long long int answer = 0;
	int l = 0;
	a = cin.get();
	while (a != '\n') {
		nm[int(a) - 48]++;
		l++;
		a = cin.get();
	}
	long long int s = 0;
	for (int i = 0; i < 10; i++) {
		s += nm[i] * i;
	}
	while (l--) {
		answer += s * pow(10, l);
	}
	cout << answer;
}