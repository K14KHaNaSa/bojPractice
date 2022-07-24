#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int t;
	float cm, kg, bmi;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> cm >> kg;
		bmi = 0;
		if (cm < 140.1) {
			cout << 6 << endl;
		}
		else if (cm < 146) {
			cout << 5 << endl;
		}
		else if (cm < 159) {
			cout << 4 << endl;
		}
		else if (cm < 161) {
			bmi = kg / pow(cm / 100, 2);
			if (bmi >= 16 && bmi < 35) {
				cout << 3 << endl;
			}
			else
				cout << 4 << endl;
		}
		else if (cm < 204) {
			bmi = kg / pow(cm / 100, 2);
			if (bmi >= 20 && bmi < 25) {
				cout << 1 << endl;
			}
			else if (bmi >= 18.5 && bmi < 30) {
				cout << 2 << endl;
			}
			else if (bmi >= 16 && bmi < 35) {
				cout << 3 << endl;
			}
			else {
				cout << 4 << endl;
			}
		}
		else
			cout << 4 << endl;
	}
}