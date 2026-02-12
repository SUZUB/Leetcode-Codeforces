#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    if (a > b) swap(a, b);
    if (b % a != 0) {
        cout << -1 << endl;
        return;
    }
    ll diff = b / a;
    int shifts = 0;
    
    while (diff % 2 == 0) {
        diff /= 2;
        shifts++;
    }

    if (diff != 1) {
        cout << -1 << endl;
    } else {
        int ops = (shifts / 3) + (shifts % 3 != 0);
        cout << ops << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}