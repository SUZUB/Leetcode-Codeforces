#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> p(n), a(n);
    // mp1 stores the position of each element in the original permutation p
    vector<int> mp1(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        mp1[p[i]] = i;
    }

    // We track segments in array 'a' (your b)
    // first/last trackers aren't strictly needed for the subsequence check,
    // but we'll use your 'flag' logic for contiguity.
    unordered_map<int, int> last_seen_idx;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        
        // Contiguity check: if we see x again, it must be right after the previous x
        if (last_seen_idx.count(x)) {
            if (last_seen_idx[x] != i - 1) {
                flag = true;
            }
        }
        last_seen_idx[x] = i;
    }

    if (flag) {
        cout << "NO\n";
        return;
    }

    // Now the relative order check: 
    // As we move through array 'a', the original indices from 'p' must never decrease.
    int last_original_pos = -1;
    for (int i = 0; i < n; i++) {
        // Only check when we move to a NEW segment/number in array 'a'
        if (i > 0 && a[i] == a[i - 1]) continue;

        int current_original_pos = mp1[a[i]];
        if (current_original_pos < last_original_pos) {
            cout << "NO\n";
            return;
        }
        last_original_pos = current_original_pos;
    }

    cout << "YES\n";
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