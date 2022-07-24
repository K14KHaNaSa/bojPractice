#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	vector<unsigned long long int> p(3, 1);
	for (int i = 3; i <= 90; i++) {
		p.push_back(p[i - 2] + p[i - 1]);
	}
	cin >> n;
	if (n > 0) {
		cout << p[n];
	}
	else
		cout << 0;
}