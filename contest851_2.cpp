#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a;
	string jinho, mbti;
	cin >> jinho >> a;
	int sameMbti = 0;
	for (int i = 0; i < a; i++) {
		cin >> mbti;
		if (mbti == jinho) {
			sameMbti++;
		}
	}
	cout << sameMbti;
}