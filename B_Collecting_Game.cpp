#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    vector<long long> pre(n);
    pre[0] = v[0].first;
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i].first;
    }
    vector<int> reach(n);
    reach[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (pre[i] >= v[i + 1].first) {
            reach[i] = reach[i + 1]; 
        } else {
            reach[i] = i;
        }
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[v[i].second] = reach[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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