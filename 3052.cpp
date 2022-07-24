#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, dummy;
	int nmz[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		nmz[i] = n % 42;
	}
	for (int i = 0; i < 10; i++) {
		dummy = 0;
		for (int j = i+1; j < 10; j++) {
			if (nmz[i] == nmz[j]) {
				dummy = 1;
			}
		}
		if (dummy == 0) {
			count = count + 1;
		}
	}
	cout << count;
}