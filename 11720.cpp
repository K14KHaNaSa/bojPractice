#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	int sum = 0;
	string in;
	cin >> n >> in;
	for (int i = 0; i < n; i++) {
		sum += in[i] - '0';
	}
	cout << sum;
}