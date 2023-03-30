#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<unsigned long long int> road(n - 1); // i -> i+1
	for (int i = 0; i < n - 1; i++) {
		cin >> road[i];
	}
	vector<unsigned long long int> wpl(n);
	for (int i = 0; i < n; i++) {
		cin >> wpl[i];
	}
	unsigned long long int answer = 0;
	unsigned long long int start = 0;
	unsigned long long int end, dis = 0;
	unsigned long long int prewpl = wpl[0];
	for (int i = 0; i < n - 1; i++) {
		end = i + 1;
		dis += road[i];
		if (prewpl > wpl[i + 1]) {
			answer += dis * prewpl;
			dis = 0;
			prewpl = wpl[i + 1];
		}
	}
	if (prewpl <= wpl[n - 1]) {
		answer += dis * prewpl;
	}
	cout << answer;
}