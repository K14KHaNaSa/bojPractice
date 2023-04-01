#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// basic setting
	// 0 
	// 1 
	// 2 4 8 6
	// 3 9 7 1
	// 4 6
	// 5
	// 6
	// 7 9 3 1
	// 8 4 2 6
	// 9 1
	
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		a %= 10;
		int answer = 1;
		switch (a) {
		case 0: answer = 10; break;
		case 1: answer = 1; break;
		case 2: switch (b % 4) {
		case 1: answer = 2; break;
		case 2: answer = 4; break;
		case 3: answer = 8; break;
		case 0: answer = 6; break;
		}break;
		case 3: switch (b % 4) {
		case 1: answer = 3; break;
		case 2: answer = 9; break;
		case 3: answer = 7; break;
		case 0: answer = 1; break;
		}break;
		case 4: switch (b % 2) {
		case 1: answer = 4; break;
		case 0: answer = 6; break;
		}break;
		case 5: answer = 5; break;
		case 6: answer = 6; break;
		case 7: switch (b % 4) {
		case 1: answer = 7; break;
		case 2: answer = 9; break;
		case 3: answer = 3; break;
		case 0: answer = 1; break;
		}break;
		case 8: switch (b % 4) {
		case 1: answer = 8; break;
		case 2: answer = 4; break;
		case 3: answer = 2; break;
		case 0: answer = 6; break;
		}break;
		case 9: switch (b % 2) {
		case 1: answer = 9; break;
		case 0: answer = 1; break;
		}break;
		}
		cout << answer << "\n";
	}
}