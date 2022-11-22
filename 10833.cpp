#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int student, apple, n;
	cin >> n;
	int nam = 0;
	for (int i = 0; i < n; i++) {
		cin >> student >> apple;
		nam += apple % student;
	}
	cout << nam;
}