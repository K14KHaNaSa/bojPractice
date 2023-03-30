#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	bool answer = false;
	for (int d = 0; d < 10; d++) {
		for (int e = 0; e < 10; e++) {
			if (d != e) {
				for (int h = 1; h < 10; h++) {
					if (d != h && e != h) {
						for (int l = 0; l < 10; l++) {
							if (d != l && e != l && h != l) {
								for (int o = 0; o < 10; o++) {
									if (d != o && e != o && h != o && l != o) {
										for (int r = 0; r < 10; r++) {
											if (d != r && e != r && h != r && l != r && o != r) {
												for (int w = 1; w < 10; w++) {
													if ((h + w) * 10000 + (e + o) * 1000 + (l + r) * 100 + l * 20 + o + d == n && !answer &&
														d != w && e != w && h != w && l != w && o != w && r != w) {
														cout << "  " << h << e << l << l << o << "\n+ " << w << o << r << l << d << "\n-------\n ";
														if (n / 100000 == 0) {
															cout << " ";
														}
														cout << n;
														answer = true;
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
	if (!answer) {
		cout << "No Answer";
	}
}