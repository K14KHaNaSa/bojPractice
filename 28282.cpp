#include <iostream>
using namespace std;

int ls[10000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, k, a;
	cin >> x >> k;
	for (int i = 0; i < x; i++) {
		cin >> a;
		ls[a - 1]++;
	}
	long long int answer = 0;
	for (int i = 0; i < x; i++) {
		cin >> a;
		answer += (x - ls[a - 1]);
	}
	cout << answer;
}