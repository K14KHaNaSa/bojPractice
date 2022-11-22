#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, fuel;
	cin >> n >> m;
	int fuels[1000][3];
	int fueltemp[1000][3];
	for (int i = 0; i < m; i++) {
		cin >> fuel;
		fuels[i][0] = fuel;
		fuels[i][1] = fuel;
		fuels[i][2] = fuel;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> fuel;
			if (j == 0) {
				fueltemp[j][1] = fuels[j + 1][0] + fuel;
				fueltemp[j][2] = min(fuels[j][1],fuels[j+1][0]) + fuel;
			}
			else if (j == m - 1) {
				fueltemp[j][1] = fuels[j - 1][2] + fuel;
				fueltemp[j][0] = min(fuels[j][1],fuels[j-1][2]) + fuel;
			}
			else {
				fueltemp[j][0] = min(fuels[j][1], fuels[j - 1][2]) + fuel;
				fueltemp[j][1] = min(fuels[j - 1][2], fuels[j + 1][0]) + fuel;
				fueltemp[j][2] = min(fuels[j + 1][0], fuels[j][1]) + fuel;
			}
		}
		for (int j = 0; j < m; j++) {
			if (j == 0) {
				fuels[j][1] = fueltemp[j][1];
				fuels[j][2] = fueltemp[j][2];
			}
			else if (j == m - 1) {
				fuels[j][1] = fueltemp[j][1];
				fuels[j][0] = fueltemp[j][0];
			}
			else {
				fuels[j][0] = fueltemp[j][0];
				fuels[j][1] = fueltemp[j][1];
				fuels[j][2] = fueltemp[j][2];
			}
		}
	}
	int needfuel = min(fuels[0][1], fuels[0][2]);
	for (int i = 1; i < m; i++) {
		if (i == m - 1) {
			needfuel = min(needfuel,min(fuels[i][0], fuels[i][1]));
		}
		else {
			needfuel = min(min(needfuel,fuels[i][2]), min(fuels[i][0], fuels[i][1]));
		}
	}
	cout << needfuel;
}