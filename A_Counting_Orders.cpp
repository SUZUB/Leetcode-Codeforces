#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // Sort A ascending for binary search, B descending to process constraints
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    long long ans = 1;
    long long mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        // Find how many elements in A are greater than current B[i]
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        long long count = a.end() - it;

        // Choices = (elements that can beat B[i]) - (elements already used for larger B)
        long long choices = count - i;

        if (choices <= 0) {
            ans = 0;
            break;
        }
        ans = (ans * choices) % mod;
    }
    
    cout << ans << "\n";
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