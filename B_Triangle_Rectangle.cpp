#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    long long w, h;
    cin >> w >> h;
    long long max_area = 0;

    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        vector<long long> p(k);
        for (int j = 0; j < k; j++) {
            cin >> p[j];
        }
        long long base = p.back() - p[0];
        long long height = (i < 2) ? h : w;
        
        max_area = max(max_area, base * height);
    }
    cout << max_area << "\n";
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