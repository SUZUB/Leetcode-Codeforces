#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> fa(2 * n + 1, 0), fb(2 * n + 1, 0);

    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (i == n - 1 || a[i] != a[i + 1]) {
            fa[a[i]] = max(fa[a[i]], count);
            count = 0;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (i == n - 1 || b[i] != b[i + 1]) {
            fb[b[i]] = max(fb[b[i]], count);
            count = 0;
        }
    }

    int ans = 0;
    for (int i = 1; i <= 2 * n; i++) {  
        ans = max(ans, fa[i] + fb[i]);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}