#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin>>d;
        long long p1, p2;
        for (int i = 1 + d; ; i++) {
            if (is_prime(i)) {
                p1 = i;
                break;
            }
        }
        for (int i = d + p1; ; i++) {
            if (is_prime(i)) {
                p2 = i;
                break;
            }
        }
        cout<<p1*p2<<endl;
    }
    return 0;
}


