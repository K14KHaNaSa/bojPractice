#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int mean[101];
	int sum = 0;
	int a;
	for (int i = 0; i < 101; i++)
		mean[i] = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		mean[a / 10]++;
		sum += a;
	}
	cout << sum / 10 << '\n';
	int maxmean = 0;
	int ansmean;
	for (int i = 0; i < 101; i++) {
		if (mean[i] > maxmean) {
			ansmean = i * 10;
			maxmean = mean[i];
		}
	}
	cout << ansmean;
}