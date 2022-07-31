#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, m;
	vector<unsigned long long int> z(3, 1);
	vector<unsigned long long int> f(3, 1);
	z[1] = 0;
	f[0] = 0;
	for (int i = 3; i <= 40; i++) {
		z.push_back(z[i - 2] + z[i - 1]);
		f.push_back(f[i - 2] + f[i - 1]);
	}
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> m;
		cout << z[m] << " " << f[m] << "\n";
	}
}