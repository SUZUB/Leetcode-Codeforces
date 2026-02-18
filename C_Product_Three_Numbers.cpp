#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = -1, b = -1, c = -1;

    // Find smallest factor a starting from 2
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }

    if (a == -1) {
        cout << "NO" << endl;
        return;
    }

    // New n to find b
    int remaining_n = n / a;
    // Find smallest factor b starting from a + 1
    for (int i = a + 1; i * i <= remaining_n; i++) {
        if (remaining_n % i == 0) {
            b = i;
            c = remaining_n / i;
            break;
        }
    }

    // Validate that c is distinct and greater than b
    if (b != -1 && c > b && c != a) {
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    } else {
        cout << "NO" << endl;
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