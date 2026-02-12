#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

void slove() {
    int n;
    cin >> n;
    
    unordered_map<int, int> mp;
    vector<int> v(n);
    vector<int> idx(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        idx[i] = i + 1; // Store original student indices 1, 2, ..., n
    }

    bool flag = true;
    for (auto ele : mp) {
        if (ele.second == 1) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << -1 << endl;
    } else {
        int i = 0;
        while (i < n) {
            int j = i;
            // Find the end of the group with the same shoe size
            while (j < n && v[j] == v[i]) {
                j++;
            }

            // Perform a cyclic shift on the indices for this group [i, j-1]
            // std::rotate shifts the range so that idx[i] moves to the back of the group
            rotate(idx.begin() + i, idx.begin() + i + 1, idx.begin() + j);

            i = j; // Jump to the next group
        }

        for (int k = 0; k < n; k++) {
            cout << idx[k] << (k == n - 1 ? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        slove();
    }
    return 0;
}