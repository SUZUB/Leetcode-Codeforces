#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int l=0,r=n-1;
    int min_v=1,max_v=n;
    while(l<r){
 if (v[l] == min_v) {
            l++;
            min_v++;
        } else if (v[l] == max_v) {
            l++;
            max_v--;
        } else if (v[r] == min_v) {
            r--;
            min_v++;
        } else if (v[r] == max_v) {
            r--;
            max_v--;
        } else {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }
    cout<<-1<<endl;
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