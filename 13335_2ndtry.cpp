#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w, l;
    cin >> n >> w >> l;
    vector<int> truck_weights(n);
    for (int i = 0; i < n; i++) {
        cin >> truck_weights[i];
    }
    int answer = 0;
    vector<int> bridge(w);
    int truckno = 0;
    int bridge_weight = truck_weights[0];
    bridge[w - 1] = truck_weights[0];
    truckno++;
    answer++;
    while (bridge_weight != 0) {
        bridge_weight -= bridge[0];
        for (int i = 0; i < w - 1; i++) {
            bridge[i] = bridge[i + 1];
        }
        bridge[w - 1] = 0;
        if (truckno < n) {
            if (bridge_weight + truck_weights[truckno] <= l) {
                bridge_weight += truck_weights[truckno];
                bridge[w - 1] = truck_weights[truckno];
                truckno++;
            }
        }
        answer++;
    }
    cout << answer;
}