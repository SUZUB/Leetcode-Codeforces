#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long mod = 1000000007;

    // The formula: n * (n + 1) * (4n - 1) / 6
    // We simplify (2022 / 6) to 337 to avoid needing modular inverse
    long long term1 = n % mod;
    long long term2 = (n + 1) % mod;
    long long term3 = (4 * n - 1) % mod;

    long long ans = (((term1 * term2) % mod) * term3) % mod;
    
    // Multiplying by (2022 / 6) which is exactly 337
    ans = (ans * 337) % mod;

    cout << ans << endl;
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