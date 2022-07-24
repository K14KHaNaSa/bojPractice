#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, num, room;
	num = 1;
	room = 1;
	cin >> n;
	while (n > num) {
		num += room * 6;
		room++;
	}
	cout << room;
}