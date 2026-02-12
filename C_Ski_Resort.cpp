#include <iostream>
#include <vector>
using namespace std;
long long countSubarraysOptimized(int len, int k) {
    if (len < k) return 0;
    long long m = len - k + 1;
    return (m * (m + 1)) / 2;
}
void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long ans = 0;
    int length = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= q) {
            length++;
        } else {
            ans += countSubarraysOptimized(length, k);
            length = 0;
        }
    }
    ans += countSubarraysOptimized(length, k);

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