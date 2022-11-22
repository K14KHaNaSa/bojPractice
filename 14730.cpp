#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, c, k;
	long long int answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> k;
		answer += c * k;
	}
	cout << answer;	
}