#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    long long max_diff = 0;

    for (int k = 1; k < n; ++k) {
        if (n % k == 0) {
            long long mn = -1, mx = -1;
            for (int i = k; i <= n; i += k) {
                long long cur_sum = pref[i] - pref[i - k];
                if (mn == -1 || cur_sum < mn) mn = cur_sum;
                if (mx == -1 || cur_sum > mx) mx = cur_sum;
            }
            max_diff = max(max_diff, mx - mn);
        }
    }

    cout << max_diff << endl;
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