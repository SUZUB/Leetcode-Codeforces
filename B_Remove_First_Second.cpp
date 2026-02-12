#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> seen;
    long long total_unique_strings = 0;
    for (int i = 0; i < n; ++i) {
        if (seen.find(s[i]) == seen.end()) {
            seen.insert(s[i]);
            total_unique_strings += (n - i);
        }
    }
    cout << total_unique_strings << endl;
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