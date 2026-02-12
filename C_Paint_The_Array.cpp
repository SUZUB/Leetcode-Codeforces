#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long g1 = 0, g2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) g1 = gcd(g1, a[i]);
        else g2 = gcd(g2, a[i]);
    }

    bool ok1 = true, ok2 = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) ok1 = false;
    }
    if (ok1) {
        cout << g1 << endl;
        return;
    }

    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) ok2 = false;
    }
    if (ok2) {
        cout << g2 << endl;
        return;
    }

    cout << 0 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}