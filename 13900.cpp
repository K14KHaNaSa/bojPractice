#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned int n, input;
	cin >> n;
	unsigned long int answer = 0;
	vector<unsigned long int> sums(n + 1);
	cin >> sums[0];
	for (int i = 1; i < n; i++) {
		cin >> input;
		answer += input * sums[i - 1];
		sums[i] = input + sums[i - 1];
	}
	cout << answer;
}