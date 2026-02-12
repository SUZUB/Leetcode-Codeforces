#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int digit_sum(ll n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    ll x;
    if (!(cin >> x)) return;
    if (x % 9 != 0) {
        cout << 0 << "\n";
        return;
    }
    int count = 0;
    // We check y up to x + 162 because max digit sum for 10^18 is 162
    for (int s = 1; s <= 170; s++) {
        ll y = x + s;
        if (digit_sum(y) == s) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}