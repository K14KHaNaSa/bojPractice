#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char a;
	a = cin.get();
	int emo = 0;
	int happy = 0;
	int sad = 0;
	while (a != '\n') {
		if (a == ':') {
			emo = 1;
		}
		else if (emo == 1 && a == '-') {
			emo = 2;
		}
		else if (emo == 2) {
			if (a == ')') {
				happy++;
			}
			else if (a == '(') {
				sad++;
			}
			emo = 0;
		}
		else {
			emo = 0;
		}
		a = cin.get();
	}
	if (happy == 0 && sad == 0) {
		cout << "none";
	}
	else if (happy > sad) {
		cout << "happy";
	}
	else if (happy < sad) {
		cout << "sad";
	}
	else {
		cout << "unsure";
	}
}