#include <iostream>
#include <vector>
using namespace std;

bool family[1001];
vector<int> ch[1001];
int length[1001] = { 1001 };
bool hello = false;
int link, to;

void connected(int n) {
	family[n] = true;
	for (int j = 0; j < ch[n].size(); j++) {
		int next = ch[n][j];
		if (n == to) {
			hello = true;
		}
		if (!family[next]) {
			if (length[next] == 0) {
				length[next] = length[n] + 1;
			}
			connected(next);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, fr, u, v, m;
	cin >> n >> fr >> to;
	cin >> m;
	link = 0;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		ch[u].push_back(v);
		ch[v].push_back(u);
	}
	connected(fr);
	if (!hello) {
		cout << -1;
	}
	else {
		cout << length[to];
	}
}