#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int k, ipt, sum;
	stack<int> n;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> ipt;
		if (ipt == 0) {
			n.pop();
		}
		else {
			n.push(ipt);
		}
	}
	sum = 0;
	while(!n.empty()) {
		sum += n.top();
		n.pop();
	}
	cout << sum;
}