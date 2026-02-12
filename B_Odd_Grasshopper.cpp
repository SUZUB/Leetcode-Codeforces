#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;

        long long displacement = 0;
        long long rem = n % 4;

        if (rem == 1) {
            displacement = -n;
        } else if (rem == 2) {
            displacement = 1;
        } else if (rem == 3) {
            displacement = n + 1;
        } else {
            displacement = 0;
        }

        if (x0 % 2 == 0) {
            cout << x0 + displacement << "\n";
        } else {
            cout << x0 - displacement << "\n";
        }
    }
    return 0;
}