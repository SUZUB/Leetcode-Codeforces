#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 0 << "\n";
        return;
    }

    // Initial result is the current difference without any rotation
    int max_diff = a[n - 1] - a[0];

    for (int i = 0; i < n; i++) {
        // Case 1: Rotate segment [1, i] - moves a[i] to the end, a[0] stays at front
        // This effectively checks a[i] - a[0] for all i
        max_diff = max(max_diff, a[i] - a[0]);

        // Case 2: Rotate segment [i, n-2] - moves a[i] to the front, a[n-1] stays at end
        // This effectively checks a[n-1] - a[i] for all i
        max_diff = max(max_diff, a[n - 1] - a[i]);
    }

    // Case 3: Rotate a segment such that a[i] moves to the end and a[i+1] moves to the front
    // This happens when you rotate a prefix or suffix that splits at index i
    for (int i = 0; i < n - 1; i++) {
        max_diff = max(max_diff, a[i] - a[i + 1]);
    }

    cout << max_diff << "\n";
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