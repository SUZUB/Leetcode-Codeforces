#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        int diff = abs(x - i);
        if (diff != 0) {
            if (res == 0) res = diff;
            else res = gcd(res, diff);
        }
    }
    cout << res << endl;
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