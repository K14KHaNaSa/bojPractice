#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> aleng(n);
	int answer = 0;
	int lastno = arr[0];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				aleng[j] = max(aleng[j], aleng[i] + 1);
			}
		}
		if (answer < aleng[i]) {
			lastno = max(lastno, arr[i]);
		}
		answer = max(answer, aleng[i]);
	}
	cout << answer + 1 << "\n";
	vector<int> answerarray(answer + 1);
	int ndx = n - 1;
	while (answer >= 0) {
		if (aleng[ndx] == answer) {
			answerarray[answer] = arr[ndx];
			answer--;
		}
		ndx--;
	}
	for (int i = 0; i < answerarray.size(); i++) {
		cout << answerarray[i] << " ";
	}
}