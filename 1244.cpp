#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int sw, stu;
	cin >> sw;
	vector<int> onoff(sw + 1);
	for (int i = 1; i <= sw; i++) {
		cin >> onoff[i];
	}
	cin >> stu;
	int gen, num;
	for (int i = 0; i < stu; i++) {
		cin >> gen >> num;
		if (gen == 1) {
			for (int j = 1; j * num <= sw; j++) {
				if (onoff[j * num] == 1) {
					onoff[j * num] = 0;
				}
				else if (onoff[j * num] == 0) {
					onoff[j * num] = 1;
				}
			}
		}
		if (gen == 2) {
			int start = num;
			int end = num;
			bool flipfound = false;
			while (start > 1 && end < sw && !flipfound) {
				if (onoff[start - 1] == onoff[end + 1]) {
					start -= 1;
					end += 1;
				}
				else {
					flipfound = true;
				}
			}
			for (int j = start; j <= end; j++) {
				if (onoff[j] == 1) {
					onoff[j] = 0;
				}
				else {
					onoff[j] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= sw; i++) {
		cout << onoff[i] << " ";
		if (i % 20 == 0) {
			cout << "\n";
		}
	}
}