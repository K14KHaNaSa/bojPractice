#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, q, inputl, inputr;
	cin >> n >> q;
	vector<int> bpm(n + 1);
	vector<int> bpmchange(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> bpm[i];
		if (bpm[i] > bpm[i - 1]) {
			bpmchange[i] = bpmchange[i - 1] + bpm[i] - bpm[i - 1];
		}
		else {
			bpmchange[i] = bpmchange[i - 1] + bpm[i - 1] - bpm[i];
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> inputl >> inputr;
		cout << bpmchange[inputr] - bpmchange[inputl] << "\n";
	}
}