#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string one, two, three;
	cin >> one >> two >> three;
	if (one == "FizzBuzz") {
		cout << "Fizz";
	}
	else if (one == "Fizz") {
		bool twoisnum = true;
		bool threeisnum = true;
		if (two == "Buzz" || two == "FizzBuzz") {
			twoisnum = false;
		}
		if (three == "Buzz" || three == "FizzBuzz") {
			threeisnum = false;
		}
		if (twoisnum && threeisnum) {
			if ((stoi(two) + 2) % 5 == 0 || (stoi(three) + 1) % 5 == 0) {
				cout << "FizzBuzz";
			}
			else {
				cout << "Fizz";
			}
		}
		else if (twoisnum) {
			if ((stoi(two) + 2) % 5 == 0) {
				cout << "FizzBuzz";
			}
			else {
				cout << "Fizz";
			}
		}
		else if (threeisnum) {
			if ((stoi(three) + 1) % 5 == 0) {
				cout << "FizzBuzz";
			}
			else {
				cout << "Fizz";
			}
		}
		else {
			cout << "Fizz";
		}
	}
	else if (one == "Buzz") {
		if (two == "Fizz") {
			cout << stoi(three) + 1;
		}
		else if (three == "Fizz") {
			cout << stoi(two) + 2;
		}
	}
	else { // one is i
		int next = stoi(one) + 3;
		if (next % 5 == 0) {
			cout << "Buzz";
		}
		else {
			cout << next;
		}
	}
}