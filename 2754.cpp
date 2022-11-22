#include <iostream>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char abcdf, pzm;
	double score = 0.0;
	abcdf = cin.get();
	if (abcdf != 'F') {
		pzm = cin.get();
	}
	switch (abcdf) {
	case 'A': score += 1;
	case 'B': score += 1;
	case 'C': score += 1;
	case 'D': score += 1;
	default: break;
	}
	if (abcdf != 'F') {
		switch (pzm) {
		case '+': score += 0.3; break;
		case '0': break;
		case '-': score -= 0.3; break;
		default: break;
		}
	}
	if (score == 4 || score == 3 || score == 2 || score == 1 || score == 0) {
		cout << score << ".0";
	}
	else {
		cout << score;
	}
}