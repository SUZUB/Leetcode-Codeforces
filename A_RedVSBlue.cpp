#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    
    int time = r / (b + 1);
    int rem = r % (b + 1);
    string str = "";

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < time; j++) str += 'R';
        if (rem > 0) {
            str += 'R';
            rem--;
        }
        str += 'B';
    }

    for (int j = 0; j < time; j++) str += 'R';
    if (rem > 0) str += 'R';
    cout << str << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}