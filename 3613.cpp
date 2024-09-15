#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char f;
	deque<char> fn;
	int t = 0;
	// input_type = 0 (not yet) / 1 (jAVA) / 2 (C++) / 3 (neither)
	f = cin.get(); // first char, must small letter
	if ((f >= 'A' && f <= 'Z') || (f == '_'))
		t = 3;
	else
		fn.push_back(f);
	f = cin.get();
	while (f != '\n' && t < 3) {
		if (f >= 'A' && f <= 'Z' && (t < 2)) { // jAVA -> C++
			t = 1;
			fn.push_back('_');
			fn.push_back(f - 'A' + 'a');
		}
		else if ((f >= 'A' && f <= 'Z' && (t == 2)))
			t = 3;
		else if (f == '_' && (t == 0 || t == 2)) { // C++ -> jAVA
			fn.push_back(f);
			t = 2; // if t == 0
		}
		else if (f == '_' && fn.back() == '_')
			t = 3; // double underbar unavilable
		else if (f == '_' && t == 1)
			t = 3;
		else if ((f >= 'a' && f <= 'z') && t == 2 && fn.back() == '_') {
			fn.pop_back();
			if (fn.back() == '_')
				t = 3;
			fn.push_back(f - 'a' + 'A');
		}
		else
			fn.push_back(f);
		f = cin.get();
	}
	if (t == 3 || fn.back() == '_')
		cout << "Error!";
	else {
		while (!fn.empty()) {
			cout << fn.front();
			fn.pop_front();
		}
	}
}