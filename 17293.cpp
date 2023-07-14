#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		if (i > 2) {
			cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n\n";
		}
		else if (i > 1) {
			cout << "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n\n";
		}
		else {
			cout << "1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n\n";
		}
	}
	cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, ";
	if (n > 1) {
		cout << n << " bottles of beer on the wall.";
	}
	else {
		cout << "1 bottle of beer on the wall.";
	}
}