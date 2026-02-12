#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.rbegin(), a.rend());
    vector<int> res(n + 1);
    res[0] = 0;
    long long total_dist = 0;
    int dist = 1;
    for (int i = 0; i < n; i++) {
        int coord = (i % 2 == 0) ? dist : -dist;
        res[a[i].second + 1] = coord;
        total_dist += 2LL * a[i].first * dist;
        if (i % 2 != 0) dist++;
    }
    cout << total_dist << "\n";
    for (int i = 0; i <= n; i++) {
        cout << res[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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