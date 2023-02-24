#include <iostream>
#include <iomanip>
using namespace std;

double total;
void cal(double sc, string rk) {
	double abcdf = 0;
	if (rk == "A+") {
		abcdf = 4.5;
	}
	if (rk == "A0") {
		abcdf = 4.0;
	}
	if (rk == "B+") {
		abcdf = 3.5;
	}
	if (rk == "B0") {
		abcdf = 3.0;
	}
	if (rk == "C+") {
		abcdf = 2.5;
	}
	if (rk == "C0") {
		abcdf = 2.0;
	}
	if (rk == "D+") {
		abcdf = 1.5;
	}
	if (rk == "D0") {
		abcdf = 1.0;
	}
	total += sc * abcdf;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string classname;
	double score;
	double cs = 0;
	string rank;
	total = 0;
	for (int i = 0; i < 20; i++) {
		cin >> classname >> score >> rank;
		if (rank != "P") {
			cal(score, rank);
			cs += score;
		}
	}
	cout << fixed << setprecision(6) << total / cs;
}