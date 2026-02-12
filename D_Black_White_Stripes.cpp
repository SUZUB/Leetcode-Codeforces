#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int current_w = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            current_w++;
        }
    }

    int min_w = current_w;

    for (int i = k; i < n; i++) {
        if (s[i] == 'W') {
            current_w++;
        }
        if (s[i - k] == 'W') {
            current_w--;
        }
        min_w = min(min_w, current_w);
    }

    cout << min_w << "\n";
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