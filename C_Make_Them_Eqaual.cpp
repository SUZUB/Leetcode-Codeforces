#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    bool all_match = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != c) {
            all_match = false;
            break;
        }
    }

    if (all_match) {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        bool possible = true;
        for (int j = i; j <= n; j += i) {
            if (s[j - 1] != c) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << 1 << endl;
            cout << i << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n - 1 << " " << n << endl;
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