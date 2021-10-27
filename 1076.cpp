#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b, c;
    long om;
    cin >> a >> b >> c;
    if (a == "black") {
        om = 0;
    }else if (a == "brown") {
        om = 10;
    }else if (a == "red") {
        om = 20;
    }else if (a == "orange") {
        om = 30;
    }else if (a == "yellow") {
        om = 40;
    }else if (a == "green") {
        om = 50;
    }else if (a == "blue") {
        om = 60;
    }else if (a == "violet") {
        om = 70;
    }else if (a == "grey") {
        om = 80;
    }else if (a == "white") {
        om = 90;
    }
    
    if (b == "black") {
        om = om + 0;
    }else if (b == "brown") {
        om = om + 1;
    }else if (b == "red") {
        om = om + 2;
    }else if (b == "orange") {
        om = om + 3;
    }else if (b == "yellow") {
        om = om + 4;
    }else if (b == "green") {
        om = om + 5;
    }else if (b == "blue") {
        om = om + 6;
    }else if (b == "violet") {
        om = om + 7;
    }else if (b == "grey") {
        om = om + 8;
    }else if (b == "white") {
        om = om + 9;
    }

    if (om == 0) {
        cout << om;
    }
    else {
        if (c == "black") {
            cout << om;
        }
        else if (c == "brown") {
            cout << om << "0";
        }
        else if (c == "red") {
            cout << om << "00";
        }
        else if (c == "orange") {
            cout << om << "000";
        }
        else if (c == "yellow") {
            cout << om << "0000";
        }
        else if (c == "green") {
            cout << om << "00000";
        }
        else if (c == "blue") {
            cout << om << "000000";
        }
        else if (c == "violet") {
            cout << om << "0000000";
        }
        else if (c == "grey") {
            cout << om << "00000000";
        }
        else if (c == "white") {
            cout << om << "000000000";
        }
    }   
}