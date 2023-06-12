#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	int answer = 0;
	cin >> n;
	while (n > 0) {
		cin >> a;
		answer = max(answer, a - n);
		n--;
	}
	cout << answer;
}