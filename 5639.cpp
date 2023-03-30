#include <iostream>
#include <vector>
using namespace std;

int nodes;
vector<vector<int>> node(10000, vector<int>(3));
// [mynum, leftrootindex, rightrootindex]
void treeinput(int inputnum, int leaf) {
	if (inputnum < node[leaf][0]) {
		if (node[leaf][1] == 0) {
			node[leaf][1] = nodes;
		}
		else {
			treeinput(inputnum, node[leaf][1]);
		}
	}
	else {
		if (node[leaf][2] == 0) {
			node[leaf][2] = nodes;
		}
		else {
			treeinput(inputnum, node[leaf][2]);
		}
	}
}
void treesearch(int leaf) {
	if (node[leaf][1] != 0) {
		treesearch(node[leaf][1]);
	}
	if (node[leaf][2] != 0) {
		treesearch(node[leaf][2]);
	}
	cout << node[leaf][0] << "\n";
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int start = n;
	node[0][0] = start;
	nodes = 1;
	while (cin >> n) {
		node[nodes][0] = n;
		treeinput(n, 0);
		nodes++;
	}
	treesearch(0);
}