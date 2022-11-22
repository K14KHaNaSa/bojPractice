#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int d, h, w;
	cin >> d >> h >> w;
	cout << int(sqrt(pow(d, 2) / (pow(h, 2) + pow(w, 2))) * h) << " " << int(sqrt(pow(d, 2) / (pow(h, 2) + pow(w, 2))) * w);
}