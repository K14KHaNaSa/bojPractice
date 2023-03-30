#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<unsigned long long int> desn;
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			if (a > b || a == 0) {
				for (int c = 0; c < 10; c++) {
					if (b > c || (a == 0 && b == 0)) {
						for (int d = 0; d < 10; d++) {
							if (c > d || (a == 0 && b == 0 && c == 0)) {
								for (int e = 0; e < 10; e++) {
									if (d > e || (a == 0 && b == 0 && c == 0 && d == 0)) {
										for (int f = 0; f < 10; f++) {
											if (e > f || (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)) {
												for (int g = 0; g < 10; g++) {
													if (f > g || (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0)) {
														for (int h = 0; h < 10; h++) {
															if (g > h || (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0)) {
																for (int i = 0; i < 10; i++) {
																	if (h > i || (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0)) {
																		for (int j = 0; j < 10; j++) {
																			if (i > j || (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0)) {
																				desn.push_back(a * 1000000000 + b * 100000000 + c * 10000000 + d * 1000000 + e * 100000 + f * 10000 + g * 1000 + h * 100 + i * 10 + j);
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (n < 1023) {
		cout << desn[n - 1];
	}
	else if (n == 1023) {
		cout << "9876543210";
	}
	else {
		cout << "-1";
	}
}