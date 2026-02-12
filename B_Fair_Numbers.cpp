#include <iostream>
using namespace std;
bool isFair(long long n) {
    long long temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && n % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}
void solve() {
    long long n;
    cin >> n;
    while (!isFair(n)) {
        n++;
    }
    cout << n << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}