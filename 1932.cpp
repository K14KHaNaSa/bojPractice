#include <iostream>
#include <vector>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <int> tri(501, 0);
	vector <int> temp(501, 0);
	int n, triVal, maxVal;
	cin >> n;
	cin >> tri[1];
	temp[1] = tri[1];
	for (int i = 2; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			temp[k] = tri[k];
		}
		for (int j = 1; j <= i; j++) {
			cin >> triVal;
			tri[j] = triVal + max(temp[j], temp[j - 1]);
		}
	}
	maxVal = 0;
	for (int i = 1; i <= n; i++) {
		maxVal = max(maxVal, tri[i]);
	}
	cout << maxVal;
}