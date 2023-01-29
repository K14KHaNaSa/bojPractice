#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int small, capital, num, blk;
	int ipt;
	ipt = 30;
	while (ipt != -1) {
		ipt = cin.get();
		if (cin.eof()) {
			break;
		}
		small = 0;
		capital = 0;
		num = 0;
		blk = 0;
		while (ipt != '\n') {
			if (ipt >= 48 && ipt <= 57) {
				num++;
			}
			else if (ipt >= 65 && ipt <= 90) {
				capital++;
			}
			else if (ipt >= 97 && ipt <= 122) {
				small++;
			}
			else if (ipt == 32) {
				blk++;
			}
			ipt = cin.get();
		}
		cout << small << " " << capital << " " << num << " " << blk << "\n";
	}
}