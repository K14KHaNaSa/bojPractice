#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char a;
	int wordcount = 0;
	int numsum = 0;
	a = cin.get();
	while (a != '\n') {
		if (int(a)<83) {
			numsum += ((int(a) - 65) / 3) + 2;
		}
		else if(a=='S'){
			numsum += 7;
		}
		else if (int(a)<90) {
			numsum += ((int(a) - 66) / 3) + 2;
		}
		else if (a == 'Z') {
			numsum += 9;
		}
		wordcount++;
		a = cin.get();
	}
	cout << numsum + wordcount;
}