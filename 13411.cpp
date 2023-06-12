#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double n, x, y, v;
	cin >> n;
	vector<vector<double>> robot(n, vector<double>(2));
	for (double i = 0; i < n; i++) {
		cin >> x >> y >> v;
		robot[i][0] = sqrt(x * x + y * y) / v;
		robot[i][1] = i + 1;
	}
	sort(robot.begin(), robot.end());
	for (double i = 0; i < n; i++) {
		cout << robot[i][1] << "\n";
	}
}