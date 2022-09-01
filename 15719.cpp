#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned int n, input;
	unsigned long int answer = 0;
	unsigned long int msum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		answer += input;
		msum += i + 1;
	}
	cout << answer + n - msum;
}