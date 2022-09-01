#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<unsigned int> a(n);
	vector<unsigned int> b(n);
	int azerocount = 0;
	int bzerocount = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			azerocount++;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] == 0) {
			bzerocount++;
		}
	}
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	unsigned int answer = 0;
	for (int i = azerocount; i < n - bzerocount; i++) {
		answer += a[i] * b[i];
	}
	cout << answer;	
}