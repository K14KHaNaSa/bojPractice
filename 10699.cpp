#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	time_t timer = time(NULL);

	struct tm* t;
	t = localtime(&timer);
	cout << t->tm_year+1900 << "-" << setw(2) << setbase(0) << setfill('0') << t->tm_mon+1 << "-" << t->tm_mday;
}