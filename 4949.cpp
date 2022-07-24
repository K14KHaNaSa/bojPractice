#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	stack<char> gh;
	int dgh = 0;
	int sgh = 0;
	int cs = 0;
	int endcall = 1;
	char n;
	while (endcall) {
		cin.get(n);
		if (n == '(') {
			gh.push('(');
			cs++;
			sgh++;
		}
		else if (n == ')') {			
			if (gh.empty()) {

			}
			else if (gh.top() == '(') {
				gh.pop();
			}
			cs++;
			sgh--;
		}
		else if (n == '[') {
			gh.push('[');
			cs++;
			dgh++;
		}
		else if (n == ']') {
			if (gh.empty()) {

			}
			else if (gh.top() == '[') {
				gh.pop();
			}
			cs++;
			dgh--;
		}
		else if (n == '.') {
			if (cs == 0) {
				endcall = 0;
			}
			else if (gh.empty() && dgh == 0 && sgh == 0){
				cout << "yes\n";
			}
			else {
				cout << "no\n";
			}
			cs = 0;
			dgh = 0;
			sgh = 0;
			while (!gh.empty()) {
				gh.pop();
			}
		}
		else if (n != '\n') {
			cs++;
		}
	}
}