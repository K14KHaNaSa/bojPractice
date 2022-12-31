#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> numappear(9); // 0~8, 9 --> 6
	char roomnum;
	while (cin >> roomnum) {
		if (roomnum == '0') {
			numappear[0]++;
		}
		else if (roomnum == '1') {
			numappear[1]++;
		}
		else if (roomnum == '2') {
			numappear[2]++;
		}
		else if (roomnum == '3') {
			numappear[3]++;
		}
		else if (roomnum == '4') {
			numappear[4]++;
		}
		else if (roomnum == '5') {
			numappear[5]++;
		}
		else if (roomnum == '6' || roomnum == '9') {
			numappear[6]++;
		}
		else if (roomnum == '7') {
			numappear[7]++;
		}
		else if (roomnum == '8') {
			numappear[8]++;
		}
	}
	int needsets = numappear[0];
	for (int i = 1; i < 9; i++) {
		if (i == 6) {
			if (numappear[6] % 2 == 1) {
				numappear[6] /= 2;
				numappear[6]++;
			}
			else {
				numappear[6] /= 2;
			}
		}
		if (numappear[i] > needsets) {
			needsets = numappear[i];
		}
	}
	cout << needsets;
}