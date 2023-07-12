#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double n;
	cin >> n;
	cout << "The largest square has side length " << int(sqrt(n)) << ".";
}