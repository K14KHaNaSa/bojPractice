#include <iostream>
using namespace std;

void zero() {
	cout << "0000\n0  0\n0  0\n0  0\n0000\n";
}
void one() {
	cout << "   1\n   1\n   1\n   1\n   1\n";
}
void two() {
	cout << "2222\n   2\n2222\n2\n2222\n";
}
void three() {
	cout << "3333\n   3\n3333\n   3\n3333\n";
}
void four() {
	cout << "4  4\n4  4\n4444\n   4\n   4\n";
}
void five() {
	cout << "5555\n5\n5555\n   5\n5555\n";
}
void six() {
	cout << "6666\n6\n6666\n6  6\n6666\n";
}
void seven() {
	cout << "7777\n   7\n   7\n   7\n   7\n";
}
void eight() {
	cout << "8888\n8  8\n8888\n8  8\n8888\n";
}
void nine() {
	cout << "9999\n9  9\n9999\n   9\n   9\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char n;
	n = cin.get();
	while (n != '\n') {
		if (n == '0') {
			zero();
		}
		if (n == '1') {
			one();
		}
		if (n == '2') {
			two();
		}
		if (n == '3') {
			three();
		}
		if (n == '4') {
			four();
		}
		if (n == '5') {
			five();
		}
		if (n == '6') {
			six();
		}
		if (n == '7') {
			seven();
		}
		if (n == '8') {
			eight();
		}
		if (n == '9') {
			nine();
		}
		cout << "\n";
		n = cin.get();
	}
}