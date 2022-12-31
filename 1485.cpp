#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	vector<long long int> sqx(4);
	vector<long long int> sqy(4);
	vector<long long int> line(6);
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> sqx[j] >> sqy[j];
		}
		line[0] = pow(max(sqx[0] - sqx[1], sqx[1] - sqx[0]), 2) + pow(max(sqy[0] - sqy[1], sqy[1] - sqy[0]), 2);
		line[1] = pow(max(sqx[0] - sqx[2], sqx[2] - sqx[0]), 2) + pow(max(sqy[0] - sqy[2], sqy[2] - sqy[0]), 2);
		line[2] = pow(max(sqx[0] - sqx[3], sqx[3] - sqx[0]), 2) + pow(max(sqy[0] - sqy[3], sqy[3] - sqy[0]), 2);
		line[3] = pow(max(sqx[1] - sqx[2], sqx[2] - sqx[1]), 2) + pow(max(sqy[1] - sqy[2], sqy[2] - sqy[1]), 2);
		line[4] = pow(max(sqx[1] - sqx[3], sqx[3] - sqx[1]), 2) + pow(max(sqy[1] - sqy[3], sqy[3] - sqy[1]), 2);
		line[5] = pow(max(sqx[2] - sqx[3], sqx[3] - sqx[2]), 2) + pow(max(sqy[2] - sqy[3], sqy[3] - sqy[2]), 2);
		sort(line.begin(), line.end());
		if (line[0] == line[1] && line[1] == line[2] && line[2] == line[3] && line[3] != line[4] && line[4] == line[5]) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}