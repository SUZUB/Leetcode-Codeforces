#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pref(n), suff(n);
    set<char> st1, st2;

    for (int i = 0; i < n; i++) {
        st1.insert(s[i]);
        pref[i] = st1.size();
    }

    for (int i = n - 1; i >= 0; i--) {
        st2.insert(s[i]);
        suff[i] = st2.size();
    }

    int max_distinct = 0;
    for (int i = 0; i < n - 1; i++) {
        max_distinct = max(max_distinct, pref[i] + suff[i + 1]);
    }

    cout << max_distinct << endl;
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