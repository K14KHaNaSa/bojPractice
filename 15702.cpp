#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int student[100][2]; // { ID , score }
    int score[100];
    int n, m;
    char ox;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> score[i];
    for (int j = 0; j < m; j++) {
        cin >> student[j][0];
        student[j][1] = 0;
        for (int i = 0; i < n; i++) {
            cin >> ox;
            if (ox == 'O')
                student[j][1] += score[i];
        }
    }
    int ans_stu;
    int ans_scr = 0;
    for (int i = 0; i < m; i++) {
        if (student[i][1] > ans_scr) {
            ans_stu = student[i][0];
            ans_scr = student[i][1]; 
        }
        else if (student[i][1] == ans_scr && student[i][0] < ans_stu)
            ans_stu = student[i][0];
    }
    cout << ans_stu << " " << ans_scr;
}