#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int e, f, c;
	cin >> e >> f >> c;
	int b = e + f;
	int answer = b / c;
	b = b % c + answer;
	while (b >= c) {
		answer += b / c;
		b = b / c + b % c;
	}
	cout << answer;
}