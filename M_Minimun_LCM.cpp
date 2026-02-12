#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int best_a = 1;

        for (int d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                // n/d is the largest proper divisor
                best_a = n / d; 
                break;
            }
        }
        cout << best_a << " " << n - best_a << "\n";
    }
    return 0;
}