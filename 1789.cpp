#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	unsigned long long int s, sum;
	int count = 0;
	sum = 0;
	cin >> s;
	int i = 1;
	if (s == 2) {
		cout << 1;
		return 0;
	}
	while(1){
		i++;
		sum += i;
		if (sum >= s) {
			cout << i - 1;
			return 0;
		}
	}
}