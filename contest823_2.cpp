#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned long long int n, a, b, answer;
	cin >> n;
	vector<unsigned long long int> v(n);
	answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		answer +=  b;
		v[i] = a;
	}
	sort(v.begin(), v.end());
	for (int i = 1; i <= n; i++) {
		answer = answer + i * v[i - 1];
	}
	cout << answer;	
}