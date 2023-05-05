#include <iostream>
#include <queue>
using namespace std;

short n, m;
short map[50][50]; // . = 0 / a ~ f = 1 ~ 6 / A ~ F = 11 ~ 16 / exit = 8 / # = 99
int step[50][50][64];

short pickupkey(short keytype, short nowhold) {
    //32 16 8 4 2 1
    short rkv = nowhold; //returnkeyvalue
    if (keytype == 1) {
        //a
        if (nowhold % 2 == 0) {
            rkv = nowhold + 1;
        }
    }
    else if (keytype == 2) {
        //b
        if ((nowhold % 4) / 2 == 0) {
            rkv = nowhold + 2;
        }
    }
    else if (keytype == 3) {
        //c
        if ((nowhold % 8) / 4 == 0) {
            rkv = nowhold + 4;
        }
    }
    else if (keytype == 4) {
        //d
        if ((nowhold % 16) / 8 == 0) {
            rkv = nowhold + 8;
        }
    }
    else if (keytype == 5) {
        //e
        if ((nowhold % 32) / 16 == 0) {
            rkv = nowhold + 16;
        }
    }
    else if (keytype == 6) {
        //f
        if (nowhold / 32 == 0) {
            rkv = nowhold + 32;
        }
    }
    return rkv;
}

bool passdoor(short walltype, short nowhold) {
    //32 16 8 4 2 1
    bool result = false; //return (dis)able 2 pass door
    if (walltype == 1) {
        //a
        if (nowhold % 2 == 1) {
            result = true;
        }
    }
    else if (walltype == 2) {
        //b
        if ((nowhold % 4) / 2 == 1) {
            result = true;
        }
    }
    else if (walltype == 3) {
        //c
        if ((nowhold % 8) / 4 == 1) {
            result = true;
        }
    }
    else if (walltype == 4) {
        //d
        if ((nowhold % 16) / 8 == 1) {
            result = true;
        }
    }
    else if (walltype == 5) {
        //e
        if ((nowhold % 32) / 16 == 1) {
            result = true;
        }
    }
    else if (walltype == 6) {
        //f
        if (nowhold / 32 == 1) {
            result = true;
        }
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int su, sv; //start point
    char mtype; // a = 97 / A = 65
    for (short i = 0; i < n; i++) {
        mtype = cin.get(); // \n
        for (short j = 0; j < m; j++) {
            mtype = cin.get();
            if (mtype == '0') {
                //start
                su = i;
                sv = j;
                map[i][j] = 0;
            }
            else if (short(mtype) > 64 && short(mtype) < 71) {
                //door
                map[i][j] = short(mtype) - 54;
            }
            else if (short(mtype) > 96 && short(mtype) < 103) {
                //key
                map[i][j] = short(mtype) - 96;
            }
            else if (mtype == '#') {
                //wall
                map[i][j] = 99;
            }
            else if (mtype == '1') {
                //exit
                map[i][j] = 8;
            }
            else {
                //empty area
                map[i][j] = 0;
            }
            for (short k = 0; k < 64; k++) {
                step[i][j][k] = 100000; // reset step
            }
        }
    }
    step[su][sv][0] = 0;
    int answer = 100001;
    queue<pair<short, pair<short, short>>> move; // movecount / keytype / u / v
    move.push(make_pair(0, make_pair(su, sv)));
    bool exit = false;
    while (!move.empty()) {
        short key = move.front().first; // key type (0 ~ 2^6 - 1) (fedcba) / 32 16 8 4 2 1
        short u = move.front().second.first;
        short v = move.front().second.second;
        int mc = step[u][v][key];
        move.pop();
        if (u > 0 && !exit) {
            if (map[u - 1][v] == 8) {
                answer = mc + 1;
                exit = true;
                while (!move.empty()) {
                    move.pop();
                }
            }
            else if (map[u - 1][v] == 0 && step[u - 1][v][key] > mc + 1) {
                step[u - 1][v][key] = mc + 1;
                move.push(make_pair(key, make_pair(u - 1, v)));
            }
            else if (map[u - 1][v] / 10 == 0) {
                // key
                short nextkey = pickupkey(map[u - 1][v], key);
                if (step[u - 1][v][nextkey] > mc + 1) {
                    step[u - 1][v][nextkey] = mc + 1;
                    move.push(make_pair(nextkey, make_pair(u - 1, v)));
                }
            }
            else if (map[u - 1][v] / 10 == 1) {
                // door
                bool pass = passdoor(map[u - 1][v] % 10, key);
                if (pass && step[u - 1][v][key] > mc + 1) {
                    step[u - 1][v][key] = mc + 1;
                    move.push(make_pair(key, make_pair(u - 1, v)));
                }
            }
        }
        if (u < n - 1 && !exit) {
            if (map[u + 1][v] == 8) {
                answer = mc + 1;
                exit = true;
                while (!move.empty()) {
                    move.pop();
                }
            }
            else if (map[u + 1][v] == 0 && step[u + 1][v][key] > mc + 1) {
                step[u + 1][v][key] = mc + 1;
                move.push(make_pair(key, make_pair(u + 1, v)));
            }
            else if (map[u + 1][v] / 10 == 0) {
                // key
                short nextkey = pickupkey(map[u + 1][v], key);
                if (step[u + 1][v][nextkey] > mc + 1) {
                    step[u + 1][v][nextkey] = mc + 1;
                    move.push(make_pair(nextkey, make_pair(u + 1, v)));
                }
            }
            else if (map[u + 1][v] / 10 == 1) {
                // door
                bool pass = passdoor(map[u + 1][v] % 10, key);
                if (pass && step[u + 1][v][key] > mc + 1) {
                    step[u + 1][v][key] = mc + 1;
                    move.push(make_pair(key, make_pair(u + 1, v)));
                }
            }
        }
        if (v > 0 && !exit) {
            if (map[u][v - 1] == 8) {
                answer = mc + 1;
                exit = true;
                while (!move.empty()) {
                    move.pop();
                }
            }
            else if (map[u][v - 1] == 0 && step[u][v - 1][key] > mc + 1) {
                step[u][v - 1][key] = mc + 1;
                move.push(make_pair(key, make_pair(u, v - 1)));
            }
            else if (map[u][v - 1] / 10 == 0) {
                // key
                short nextkey = pickupkey(map[u][v - 1], key);
                if (step[u][v - 1][nextkey] > mc + 1) {
                    step[u][v - 1][nextkey] = mc + 1;
                    move.push(make_pair(nextkey, make_pair(u, v - 1)));
                }
            }
            else if (map[u][v - 1] / 10 == 1) {
                // door
                bool pass = passdoor(map[u][v - 1] % 10, key);
                if (pass && step[u][v - 1][key] > mc + 1) {
                    step[u][v - 1][key] = mc + 1;
                    move.push(make_pair(key, make_pair(u, v - 1)));
                }
            }
        }
        if (v < m - 1 && !exit) {
            if (map[u][v + 1] == 8) {
                answer = mc + 1;
                exit = true;
                while (!move.empty()) {
                    move.pop();
                }
            }
            else if (map[u][v + 1] == 0 && step[u][v + 1][key] > mc + 1) {
                step[u][v + 1][key] = mc + 1;
                move.push(make_pair(key, make_pair(u, v + 1)));
            }
            else if (map[u][v + 1] / 10 == 0) {
                // key
                short nextkey = pickupkey(map[u][v + 1], key);
                if (step[u][v + 1][nextkey] > mc + 1) {
                    step[u][v + 1][nextkey] = mc + 1;
                    move.push(make_pair(nextkey, make_pair(u, v + 1)));
                }
            }
            else if (map[u][v + 1] / 10 == 1) {
                // door
                bool pass = passdoor(map[u][v + 1] % 10, key);
                if (pass && step[u][v + 1][key] > mc + 1) {
                    step[u][v + 1][key] = mc + 1;
                    move.push(make_pair(key, make_pair(u, v + 1)));
                }
            }
        }
    }
    if (answer > 100000) {
        cout << "-1";
    }
    else {
        cout << answer;
    }
}