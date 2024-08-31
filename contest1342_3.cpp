#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, s, head, tail_minus, tail_zero;
	cin >> n;
	cin >> head;
	n--;
	tail_minus = 0;
	tail_zero = 0;
	while (n--) {
		cin >> s;
		if (head > s - head - tail_zero)
			tail_zero += s;
		else {
			tail_minus += tail_zero + head;
			tail_zero = 0;
			head = s;
		}
	}
	cout << head - tail_minus;
}