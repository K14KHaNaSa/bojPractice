#include <iostream>
using namespace std;

void printnum(int num) {
	if (num / 100 == 0) {
		cout << ".";
	}
	if (num / 10 == 0) {
		cout << ".";
	}
	cout << num;
}
void udline(void) {
	cout << char(43);
	for (int i = 0; i < 21; i++) {
		cout << char(45);
	}
	cout << char(43) << "\n";
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	cin >> n >> d;
	int day = 1;
	udline();
	cout << char(124);
	for (int j = 0; j < d - 1; j++) {
		cout << "...";
	}
	for (int j = 0; j < 7 - d + 1; j++) {
		if (day <= n) {
			printnum(day);
			day++;
		}
		else {
			cout << "...";
		}
	}
	cout << char(124) << "\n";
	while (day <= n) {
		cout << char(124);
		for (int i = 0; i < 7; i++) {
			if (day <= n) {
				printnum(day);
				day++;
			}
			else {
				cout << "...";
			}
		}
		cout << char(124) << "\n";
	}
	udline();
}