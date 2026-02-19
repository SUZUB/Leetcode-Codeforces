#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
void solve() {
    int n,s;
    cin>>n>>s;
    vector<int>v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum<s){
        cout<<-1<<endl;
        return;
    }
    int left = 0, current_sum = 0, max_len = 0;
    for (int right = 0; right < n; right++) {
        current_sum += v[right];
        while (current_sum > s) {
            current_sum -= v[left];
            left++;
        }
        if (current_sum == s) {
            max_len = max(max_len, right - left + 1);
        }
    }
    cout << n - max_len << "\n";
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