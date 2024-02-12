#include <iostream>
using namespace std;

int n, m;
int song_data[10][50];
int ans_song = 0;
int ans_guitar = 0;
int check_list[50];

void bt(int start, int guitars) {
	int now_songs = 0;
	for (int j = 0; j < m; j++) {
		if (check_list[j] > 0)
			now_songs++;
	}
	if (now_songs > ans_song) {
		ans_song = now_songs;
		ans_guitar = guitars;
	}
	else if (now_songs == ans_song)
		ans_guitar = min(ans_guitar, guitars);
	for (int i = start + 1; i < n; i++) {
		for (int j = 0; j < m; j++)
			check_list[j] += song_data[i][j];
		bt(i, guitars + 1);
		for (int j = 0; j < m; j++)
			check_list[j] -= song_data[i][j];
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string songname;
	char yn;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> songname;
		yn = cin.get();
		for (int j = 0; j < m; j++) {
			yn = cin.get();
			if (yn == 'Y')
				song_data[i][j] = 1;
			else
				song_data[i][j] = 0;
		}			
	}
	for (int j = 0; j < m; j++)
		check_list[j] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			check_list[j] = song_data[i][j];
		bt(i, 1);
	}
	(ans_guitar > 0) ? cout << ans_guitar : cout << -1;
}