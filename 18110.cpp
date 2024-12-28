#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> lv(n);
	for (int i = 0; i < n; i++)
		cin >> lv[i];
	double answer = 0;
	sort(lv.begin(), lv.end());
	int cutted = int(round(double(n) * 0.15));
	for (int i = cutted; i < n - cutted; i++)
		answer += lv[i];
	answer > 0 ? cout << round(double(answer) / (n - cutted * 2)) : cout << 0;
}