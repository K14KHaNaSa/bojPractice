#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int a, b, c, n;
	vector<int> num(10,0);
	cin >> a >> b >> c;
	n = a * b * c;
	while (n > 0) {
		num[n % 10]++;
		n = n / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\n";
	}
}