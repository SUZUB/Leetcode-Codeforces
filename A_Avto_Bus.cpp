#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if (n < 4 || n % 2 != 0) {
        cout << -1 << "\n";
    } else {
        long long mn, mx;
    
        mx = n / 4;
        
        if (n % 6 == 0) {
            mn = n / 6;
        } else {
            mn = (n / 6) + 1;
        }
        cout << mn << " " << mx << "\n";
    }
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