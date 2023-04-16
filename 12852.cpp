#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int	answer = 1000001;
	cin >> n;
	vector<int> x(n + 1);
	x[n] = 1;
	queue<int> one;
	one.push(n);
	while (!one.empty()) {
		int number = one.front();
		one.pop();
		if (number % 3 == 0 && answer > 1000000) {
			if (number / 3 == 1) {
				x[number / 3] = x[number] + 1;
				answer = min(answer, x[number] + 1);
				while (!one.empty()) {
					one.pop();
				}
			}
			else if (x[number / 3] == 0) {
				x[number / 3] = x[number] + 1;
				one.push(number / 3);
			}
		}
		if (number % 2 == 0 && answer > 1000000) {
			if (number / 2 == 1) {
				x[number / 2] = x[number] + 1;
				answer = min(answer, x[number] + 1);
				while (!one.empty()) {
					one.pop();
				}
			}
			else if (x[number / 2] == 0) {
				x[number / 2] = x[number] + 1;
				one.push(number / 2);
			}
		}
		if (number > 2 && answer > 1000000 && x[number - 1] == 0) {
			x[number - 1] = x[number] + 1;
			one.push(number - 1);
		}
	}
	cout << x[1] - 1 << "\n" << n << " ";
	stack<int> answerstack;
	int reversenum = 1;
	while (reversenum < n) {
		answerstack.push(reversenum);
		if (reversenum * 3 <= n) {
			if (x[reversenum * 3] == x[reversenum] - 1) {
				reversenum *= 3;
			}
			else if (x[reversenum * 2] == x[reversenum] - 1) {
				reversenum *= 2;
			}
			else {
				reversenum++;
			}
		}
		else if (reversenum * 2 <= n) {
			if (x[reversenum * 2] == x[reversenum] - 1) {
				reversenum *= 2;
			}
			else {
				reversenum++;
			}
		}
		else {
			reversenum++;
		}
	}
	while (!answerstack.empty()) {
		cout << answerstack.top() << " ";
		answerstack.pop();
	}
}