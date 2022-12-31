#include <iostream>

using namespace std;

int main(void) {

    int n, len, dminus, day;

    int emojiday[3];

    cin >> n;

    int emoday = 0;

    dminus = cin.get();



    for (int i = 0; i < n; i++) {

        dminus = cin.get();

        dminus = cin.get();

        len = 0;

        dminus = cin.get();

        while (dminus != 10) {

            emojiday[len] = dminus - 48;

            len++;

            dminus = cin.get();

        }

        if (len == 3) {

            day = emojiday[0] * 100 + emojiday[1] * 10 + emojiday[2];

        }

        else if (len == 2) {

            day = emojiday[0] * 10 + emojiday[1];

        }

        else {

            day = emojiday[0];

        }

        if (day <= 90) {

            emoday++;

        }

    }

    cout << emoday;

} // programmed in spearhead festival