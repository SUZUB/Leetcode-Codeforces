#include <iostream>

using namespace std;

void solve() {
    long long x, y, k;
    if (!(cin >> x >> y >> k)) return;

    long long total_sticks_needed = (k * y) + k;
    long long sticks_to_gain = total_sticks_needed - 1;
    long long stick_trades = (sticks_to_gain + (x - 2)) / (x - 1);
    cout << stick_trades + k << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}