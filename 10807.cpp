#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, v, nn[100], i, count = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> nn[i];
	}
	cin >> v;
	for (i = 0; i < n; i++) {
		if (v == nn[i]) 
			count++;
	}
	cout << count;
}