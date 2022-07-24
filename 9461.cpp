#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int t, n;
	vector<unsigned long long int> p(3, 1);
	for (int i = 3; i <= 100; i++) {
		p.push_back(p[i - 3] + p[i - 2]);
		//p[i] = p[i - 3] + p[i - 2];
	}
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		cout << p[n - 1] << endl;
	}
}