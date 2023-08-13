#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string today, gifcon;
	int q;
	cin >> today;
	int tyear = stoi(today.substr(0, 4));
	int tmonth = stoi(today.substr(5, 2));
	int tday = stoi(today.substr(8, 2));
	int stand = tyear * 366 + tmonth * 31 + tday;
	cin >> q;
	int answer = 0;
	while (q--) {
		cin >> gifcon;
		int gyear = stoi(gifcon.substr(0, 4));
		int gmonth = stoi(gifcon.substr(5, 2));
		int gday = stoi(gifcon.substr(8, 2));
		int gift = gyear * 366 + gmonth * 31 + gday;
		if (gift >= stand) {
			answer++;
		}
	}
	cout << answer;
}