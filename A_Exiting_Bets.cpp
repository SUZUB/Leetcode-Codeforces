#include <iostream>
#include <algorithm>
using namespace std;
void solve() {
    long long a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    long long diff = abs(a - b);
    long long moves = min(a % diff, diff - (a % diff));
    cout << diff << " " << moves << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}